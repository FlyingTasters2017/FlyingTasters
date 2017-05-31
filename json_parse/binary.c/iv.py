#! /usr/bin/python

Ada, C, GUI, SIMULINK, VHDL, OG, RTDS, SYSTEM_C, SCADE6, VDM, CPP = range(11)
thread, passive, unknown = range(3)
PI, RI = range(2)
synch, asynch = range(2)
param_in, param_out = range(2)
UPER, NATIVE, ACN = range(3)
cyclic, sporadic, variator, protected, unprotected = range(5)
enumerated, sequenceof, sequence, set, setof, integer, boolean, real, choice, octetstring, string = range(11)
functions = {}

functions['function1'] = {
    'name_with_case' : 'Function1',
    'runtime_nature': thread,
    'language': C,
    'zipfile': '',
    'interfaces': {},
    'functional_states' : {}
}

functions['function1']['interfaces']['pulse'] = {
    'port_name': 'pulse',
    'parent_fv': 'function1',
    'direction': PI,
    'in': {},
    'out': {},
    'synchronism': asynch,
    'rcm': cyclic,
    'period': 0,
    'wcet_low': 0,
    'wcet_low_unit': 'ms',
    'wcet_high': 0,
    'wcet_high_unit': 'ms',
    'distant_fv': '',
    'calling_threads': {},
    'distant_name': '',
    'queue_size': 1
}

functions['function1']['interfaces']['pulse']['paramsInOrdered'] = []

functions['function1']['interfaces']['pulse']['paramsOutOrdered'] = []
