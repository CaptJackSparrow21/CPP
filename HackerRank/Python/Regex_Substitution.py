import re
n = int(input())

for _ in range(n) :
    s = input()
    s = re.sub(r'(?<= )&&(?= )', 'and', s)
    s = re.sub(r'(?<= )\|\|(?= )', 'or', s)
    print(s)