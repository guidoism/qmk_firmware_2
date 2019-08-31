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
    #print(i)
    #print(keys)


keyboard = {
    "keyboard": "planck/rev5",
    "keymap": "planck_rev5_layout_ortho_4x12_mine",
    "layout": "LAYOUT_planck_1x2uC",
    "author": "Guido Bartolucci",
    "notes": "",
    "layers": layers,
}
json.dump(keyboard, open('keymap.json', 'w'))

keys = json.load(open('labels.json'))

from colorama import Fore, Back, Style
from more_itertools import chunked
import unicodedata
import ftfy
from ftfy.formatting import display_center as center, monospaced_width

def layer_key(i):
    return chr(0x2460 + i)

def color(s):
    #return Fore.RED + Back.GREEN + s + Style.RESET_ALL
    return Fore.GREEN + s + Style.RESET_ALL

def label(k):
    if k in keys:
        return keys[k]
    # UC(0x236A)
    m = re.match(r'UC\(0x(\S+)\)', k)
    if m:
        n = int(m.group(1), 16)
        return chr(n)
    m = re.match(r'MO\((\d+)\)', k)
    if m:
        return layer_key(int(m.group(1)))
    m = re.match(r'TT\((\d+)\)', k)
    if m:
        return layer_key(int(m.group(1)))
    return ' '

def info(k):
    #print(monospaced_width(k))
    return k

for i, layer in enumerate(layers):
    print(f'Layer {i}')
    '┌', '┐'
    print('┌─' + '──┬─'*11 + '──┐')
    keys = list(chunked([color(center(info(label(k)), 3)) for k in layer], 12))
    print('│' + '│'.join(keys[0]) + '│')
    print('├─' + '──┼─'*11 + '──┤')
    print('│' + '│'.join(keys[1]) + '│')
    print('├─' + '──┼─'*11 + '──┤')
    print('│' + '│'.join(keys[2]) + '│')
    print('├─' + '──┼─'*11 + '──┤')
    print('│' + '│'.join(keys[3]) + '│')
    print('└─' + '──┴─'*11 + '──┘')
    quit()




#    {
#  "keyboard": "planck/rev5",
#  "keymap": "planck_rev5_layout_ortho_4x12_mine",
#  "layout": "LAYOUT_planck_1x2uC",
#  "layers": [
#         ["KC_TAB",
#  ],
#  "author": "Guido Bartolucci",
#  "notes": ""
#}
