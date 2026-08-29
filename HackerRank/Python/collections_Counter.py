import sys
input = sys.stdin.readline
import math
from math import *
from collections import Counter

n = int(input())
sizes = list(map(int, input().split()))
shoes = Counter(sizes)

m = int(input())
money = 0

for _ in range(m) :
    size, price = map(int, input().split())

    if shoes[size] > 0 :
        money += price
        shoes[size] -= 1

print(money)