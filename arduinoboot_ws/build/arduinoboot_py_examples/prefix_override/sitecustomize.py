import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/anjali/arduinoboot_ws/install/arduinoboot_py_examples'
