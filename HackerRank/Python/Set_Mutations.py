m = int(input())
a = set(map(int, input().split()))

for _ in range(int(input())) :
    operation, size = input().split()
    b = set(map(int, input().split()))

    getattr(a, operation)(b)

print(sum(a))