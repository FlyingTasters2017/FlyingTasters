import re

# Old implementation, deprecated
#
## Helper class, to create LISP-like representations of parameter values
#class Node:
#    def __init__(self):
#        self._orderedKeys = []
#        self._values = {}
#    def walk(self, i):
#        if i not in self._orderedKeys:
#            self._orderedKeys.append(i)
#            self._values[i] = Node()
#        return self._values[i]
#    def setValue(self, v):
#        self._orderedKeys.append('MAGIC'+v)
#    def render(self, indent=0):
#       result = ""
#       assign = " => " if indent==0 else " "
#       for k in self._orderedKeys:
#            if k.startswith('MAGIC'):
#               result += '  '*indent + k[5:].replace(' ',assign,1) + '\n'
#           else:
#               result += '  '*indent + str(k) + assign + '{\n'
#               result += self._values[k].render(indent+1)
#               result += '  '*indent + '}' + '\n'
#       return result
#
## Parses the GUI-generated printouts of message data into trees of Nodes
#def ParseFields(messageData):
#    # Example data: ['tc::destination 0', 'tc::action::display abc']
#    # Example data: ['tm 123']
#    root = Node()
#    for p in messageData:
#       if p == "":
#           print "UNEXPECTED INPUT for", messageData
#           sys.exit(1)
#       pieces = p.split('::')
#       if len(pieces)<2:
#           # The parameter was a basic type (not SEQUENCE/CHOICE/...)
#           root.setValue(p.split(':')[-1])
#           return root
#       tree = root
#       for e in pieces[:-1]:
#           if e == '':
#               print "Oops"
#           tree = tree.walk(e)
#       tree.setValue(pieces[-1].replace(':',' '))
#    return root
#
#def RenderParameterFieldsOld(message, messageData):
#    # Create a nice, concise, LISP-like parameter representation
#    root = ParseFields(messageData)
#    message += '(' + root.render() + ')'
#    # Pack the closing braces, LISP-like
#    while True:
#       m = re.match(r'^(.*?)}\s+(}*\))$', message, re.DOTALL)
#       if m: message = m.group(1) + '}' + m.group(2)
#       else: break
#    # Pack the closing parentheses
#    m = re.match(r'^(.*?)\s+\)$', message, re.DOTALL)
#    if m:
#       message = m.group(1) + ')'
#    return message
#
## New implementation, for use with ASN.1 variable expressions


def SimplifyString(s):
    tmp = s
    output = ''
    while tmp != '':
        if len(tmp)<2:
            return s
        value = int(tmp[:2], 16)
        if value>127:
            return s
        output += chr(value)
        tmp = tmp[2:]
    return output


def ConvertToASCII(output):
    # If all characters are printable, create string representations for OCTET STRINGs
    finalOutput = ''
    while True:
        m = re.match(r"^(.*?)'([^']+)'H(.*?)$", output, re.DOTALL)
        if m:
            finalOutput += m.group(1) + "'"
            simplified = SimplifyString(m.group(2))
            if simplified != m.group(2):
                finalOutput += simplified + "'"
            else:
                finalOutput += simplified + "'H"
            output = m.group(3)
        else:
            finalOutput += output
            break
    return finalOutput


def RenderParameterFields(message, messageData):
    if '{' not in messageData:
        return message + ':' + ConvertToASCII(messageData)
    else:
        messageData = messageData.replace(', ', ',')
        indent = ''
        output = message + ':'
        for c in messageData:
            if c in ['{', ',']:
                output += c + '\n'
                if c == '{':
                    indent += 4*' '
                output += indent
            elif c in ['}']:
                try:
                    indent = indent[4:]
                except:
                    pass
                output += '\n' + indent + c
            else:
                output += c
    # Compress empty arrays (i.e. {\s+})
    while True:
        m = re.match(r'^(.*?){\s+}(.*?)$', output, re.DOTALL)
        if m:
            output = m.group(1) + '{}' + m.group(2)
        else:
            break
    return ConvertToASCII(output)

if __name__ == "__main__":
    # print RenderParameterFields("router_put_tc", "{intVal 0, int2Val 0, int3Val 0, intArray {0,0,0,0,0,0,0,0,0,0}, realArray {0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000,0.000000}, octStrArray {'616263'H,'62'H,''H,''H,''H,''H,''H,''H,''H,''H}, boolArray {FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE,FALSE}, enumArray {green,green,green,green,green,green,green,green,green,green}, enumValue green, enumValue2 truism, label ''H, bAlpha FALSE, bBeta FALSE, sString ''H, arr {}, arr2 {}}")
    print RenderParameterFields("router_put_tc", "tm: '616263'H")
