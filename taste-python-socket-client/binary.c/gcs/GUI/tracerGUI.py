#!/usr/bin/env python

import sys
import os
import socket
import subprocess
import signal
try:
    import pygtk
    pygtk.require("2.0")
except:
    pass
try:
    import gtk
    import gtk.glade
except:
    sys.exit(1)


g_prefix = os.popen("taste-config --prefix").readlines()[0].strip()


class TracingAndMSCs:
    def HelpAbout(self, unused_whatever):
        about = gtk.AboutDialog()
        about.set_program_name("TraceMSCs")
        about.set_version("0.1")
        about.set_copyright("(c) Semantix Information Technologies")
        about.set_comments("This tool allows TASTE GUIs to be connected\nin real-time with PragmaDev's MSC Tracer")
        about.set_website("http://www.semantix.gr/taste")
        gtk.about_dialog_set_url_hook(lambda unused_x, url, unused_y: os.system("luakit \"%s\"" % url), None)
        about.run()
        about.destroy()

    def SetControls(self, l, bMode):
        for c in l:
            c.set_sensitive(bMode)

    def CBMscToggled(self, cb):
        ctrls = (self.controls.buttonChooseFile, self.controls.fileSaveAsName)
        self.SetControls(ctrls, cb.get_active())

    def CBTracerToggled(self, cb):
        ctrls = (self.controls.ipAddress, self.controls.port, self.controls.label1, self.controls.label2)
        self.SetControls(ctrls, cb.get_active())

    def ChooseFilename(self, x):
        self.filew = gtk.FileSelection()
        self.filew.connect("destroy", lambda x: self.filew.destroy())

        def SetFilename(unused):
            self.controls.fileSaveAsName.set_text(self.filew.get_filename())
            self.filew.destroy()
        self.filew.ok_button.connect("clicked", SetFilename)
        self.filew.cancel_button.connect("clicked", lambda unused_w: self.filew.destroy())
        self.filew.set_filename("exampleRun.msc")
        self.filew.show()

    def ShowError(self, title, text, type=gtk.MESSAGE_ERROR):
        md = gtk.MessageDialog(parent=None,
            flags=gtk.DIALOG_DESTROY_WITH_PARENT, type=type,
            buttons=gtk.BUTTONS_CLOSE,
            message_format=title)
        md.format_secondary_text(text)
        md.run()
        md.destroy()

    def CheckOptionsAndDoWork(self, unused_x):
        bCreateMSC = self.controls.checkbuttonMSC.get_active()
        bConnectToTracer = self.controls.checkbuttonTracer.get_active()
        if bCreateMSC:
            try:
                f = open(self.controls.fileSaveAsName.get_text(), "w")
                f.write("Testing writes")
                f.close()
                os.unlink(self.controls.fileSaveAsName.get_text())
            except:
                return self.ShowError("Error in MSC file",
                    "Please specify a valid (name-wise and "
                    "permission-wise) file path for the MSC file")
        if bConnectToTracer:
            if len(self.controls.ipAddress.get_text().split('.')) != 4:
                return self.ShowError("Error in IP Address",
                    "Please specify a valid IP Address")
            try:
                socket.inet_aton(self.controls.ipAddress.get_text())
            except socket.error:
                return self.ShowError("Error in IP Address",
                    "Please specify a valid IP Address")
            try:
                port = int(self.controls.port.get_text())
            except:
                return self.ShowError("Error in IP port",
                    "Please specify a valid port (1-65535)")
        mode = self.controls.buttonRun.get_label()
        self.controls.buttonRun.set_label({'Run': 'Stop', 'Stop': 'Run'}[mode])
        if mode == "Stop":
            if self.childProcess:
                self.childProcess.send_signal(signal.SIGINT)
                self.childProcess.wait()
                if os.path.exists(self.controls.fileSaveAsName.get_text()):
                    self.ShowError("MSC created successfully",
                        "File (%s) generated." % self.controls.fileSaveAsName.get_text(),
                        type=gtk.MESSAGE_INFO)
            self.childProcess = None
        else:
            self.childProcess = self.StartListening(
                bConnectToTracer,
                self.controls.ipAddress.get_text(),
                str(port) if bConnectToTracer else "",
                bCreateMSC,
                self.controls.fileSaveAsName.get_text())

    def StartListening(self, bConnectToTracer, ipAddress, port, bCreateMSC, strMscFile):
        cmd = ["/usr/bin/python", g_prefix + "/bin/tracerd.py"]
        if bConnectToTracer:
            cmd.append("--forward")
            cmd.append(ipAddress+":"+port)
        if bCreateMSC:
            cmd.append("--store")
            cmd.append(strMscFile)
        # print cmd
        return subprocess.Popen(cmd, shell=False)

    def __init__(self):
        self.gladefile = g_prefix + "/share/AutoGUI/TraceMSCs.glade"
        self.wTree = gtk.glade.XML(self.gladefile)
        self.controls = type('', (), {x: self.wTree.get_widget(x) for x in [
            "fileSaveAsName", "buttonChooseFile",
            "ipAddress", "port", "label1", "label2",
            "checkbuttonTracer", "checkbuttonMSC",
            "buttonRun"]})
        dic = {
            "on_buttonRun_clicked": self.CheckOptionsAndDoWork,
            "on_Exit_activate": gtk.main_quit,
            "on_About_activate": self.HelpAbout,
            "on_checkbuttonMSC_toggled": self.CBMscToggled,
            "on_checkbuttonTracer_toggled": self.CBTracerToggled,
            "on_buttonChooseFile_clicked": self.ChooseFilename,
        }
        self.wTree.signal_autoconnect(dic)
        self.window = self.wTree.get_widget("MainWindow")
        if (self.window):
            self.window.connect("destroy", gtk.main_quit)
        self.childProcess = None

if __name__ == "__main__":
    os.chdir(os.path.abspath(os.path.dirname(sys.argv[0])))
    hwg = TracingAndMSCs()
    gtk.main()
    if hwg.childProcess:
        hwg.childProcess.send_signal(signal.SIGINT)
        hwg.childProcess.wait()
