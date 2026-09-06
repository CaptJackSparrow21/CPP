n, m = map(int, input().split())

arr = list(map(int, input().split()))

a = set(map(int, input().split()))
b = set(map(int, input().split()))

happy = 0

for x in arr :
    if x in a :
        happy += 1
    elif x in b :
        happy -= 1

print(happy)