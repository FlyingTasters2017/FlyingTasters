/////////////////////////////////////////////////////////////////////////////
// Name:        project2app.cpp
// Purpose:     
// Author:      GUI Designer
// Modified by: 
// Created:     08/07/2008 14:39:30
// RCS-ID:      
// Copyright:   
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "project2app.h"

#include "telecmds.h"

////@begin XPM images

////@end XPM images


/*!
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( Project2App )
////@end implement app


/*!
 * Project2App type definition
 */

IMPLEMENT_CLASS( Project2App, wxApp )


/*!
 * Project2App event table definition
 */

BEGIN_EVENT_TABLE( Project2App, wxApp )

////@begin Project2App event table entries
////@end Project2App event table entries

END_EVENT_TABLE()


/*!
 * Constructor for Project2App
 */

Project2App::Project2App()
{
    Init();
}


/*!
 * Member initialisation
 */

void Project2App::Init()
{
////@begin Project2App member initialisation
////@end Project2App member initialisation
}

/*!
 * Initialisation for Project2App
 */

bool Project2App::OnInit()
{    
////@begin Project2App initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif
////@end Project2App initialisation

    TeleCmds *frame = new TeleCmds(NULL);
    frame->Show(TRUE);
    SetTopWindow(frame);
    return true;
}


/*!
 * Cleanup for Project2App
 */

int Project2App::OnExit()
{    
////@begin Project2App cleanup
    return wxApp::OnExit();
////@end Project2App cleanup
}

