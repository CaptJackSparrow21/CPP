a = set(map(int, input().split()))
n = int(input())
ok = True

for _ in range(n) :
    b = set(map(int, input().split()))

    if not (a > b) :
        ok = False
        break

print(ok)