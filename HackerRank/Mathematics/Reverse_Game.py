t = int(input())

for _ in range(t) :
    n, k = map(int, input().split())

    if (k < (n // 2)) :
        print(2 * k + 1)
    else :
        print(2 * (n - k - 1))