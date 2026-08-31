import sys
input = sys.stdin.readline
from math import *
from collections import defaultdict

n, m = map(int, input().split())
d = defaultdict(list)

for i in range(1, n + 1) :
    word = 