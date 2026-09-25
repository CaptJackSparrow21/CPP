from itertools import product
k, m = map(int, input().split())
lists = []

for _ in range(k) :
    row = list(map(int, input().split()))
    lists.append(row[1:])

ans = 0

for combination in product(*lists) :
    value = sum(x * x for x in combination) % m
    ans = max(ans, value)

print(ans)