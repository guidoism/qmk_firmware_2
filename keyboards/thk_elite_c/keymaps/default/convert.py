import re, json


# Remove comments
#r = re.compile(r'\/\/.*')
#r = re.compile(r'\/\/[^\n]*')
s = open('keymap.c').read()

r = re.compile(r'{([^}]+)}', re.DOTALL)
m = r.search(s)
s = m.group(1)

layers = []
r = re.compile(r'START LAYER(.*?)END LAYER', re.DOTALL)
for i, l in enumerate(r.findall(s)):
    # TODO: remove comments
    # TODO: remove spaces
    l = re.sub(r'\/\/[^\n]*', '', l, 0)
    l = re.sub(r'\[\d+\]\s*=\s*LAYOUT_planck_mit\(', '', l, 0)
    l = re.sub(r'\),?\s*$', '', l, 0)
    #print(l[-10:])
    keys = re.split(r'\s*,\s*', l)
    keys = [re.sub(r'^\s*', '', k) for k in keys]
    keys = [k for k in keys if k]
    layers.append(keys)
    print(i)
    #print(keys)


keyboard = {
    "keyboard": "planck/rev5",
    "keymap": "planck_rev5_layout_ortho_4x12_mine",
    "layout": "LAYOUT_planck_1x2uC",
    "author": "Guido Bartolucci",
    "notes": "",
    "layers": layers,
}
json.dump(keyboard, open('cc.json', 'w'))


#    {
#  "keyboard": "planck/rev5",
#  "keymap": "planck_rev5_layout_ortho_4x12_mine",
#  "layout": "LAYOUT_planck_1x2uC",
#  "layers": [
#	      ["KC_TAB",
#  ],
#  "author": "Guido Bartolucci",
#  "notes": ""
#}





