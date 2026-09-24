import re

s = input()
k = input()

for m in re.finditer(f'(?={k})', s) :
    print((m.start(), m.start() + len(k) - 1))

if not re.search(f'(?={k})', s) :
    print((-1, -1))