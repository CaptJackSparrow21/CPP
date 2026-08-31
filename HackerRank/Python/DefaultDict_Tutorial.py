import sys
#x  input = sys.stdin.readline
from math import *
from collections import defaultdict

n, m = map(int, input().split())
d = defaultdict(list)

for i in range(1, n + 1) :
    word = input()
    d[word].append(i)

for _ in range(m) :
    word = input()

    if word in d :
        print(*d[word])
    else :
        print(-1)