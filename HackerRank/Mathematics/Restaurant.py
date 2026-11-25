from math import gcd

t = int(input())

for _ in range(t) :
    l, b = map(int, input().split())
    g = gcd(l, b)
    print((l // g) * (b // g))