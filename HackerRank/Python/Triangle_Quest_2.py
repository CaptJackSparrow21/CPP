# for i in range(1, int(input()) + 1) :
#     print(((10**i - 1) // 9) ** 2)

n = int(input())

for i in range(1, n + 1) :
    for j in range(1, i + 1) :
        print(j, end = "")
    for j in range(i - 1, 0, -1) :
        print(j, end = "")
    print()