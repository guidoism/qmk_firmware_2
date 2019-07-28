import re

r = re.compile(r'\{([^\}]+)\}', m.DOTALL)

#m = re.match(r'\{([^\}]+)\}', open('keymap.c').read())
m = r.match(open('keymap.c').read())
print(m.groups())

