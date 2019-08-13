import re

r = re.compile(r'{([^}]+)}', re.DOTALL)
m = r.search(open('keymap.c').read())
s = m.group(1)




