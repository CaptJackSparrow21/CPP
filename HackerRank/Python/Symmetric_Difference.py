m = int(input())
a = set(map(int, input().split()))

n = int(input())
b = set(map(int, input().split()))

ans = sorted(a ^ b)

for x in ans :
    print(x)