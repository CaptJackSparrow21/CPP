t = int(input())
mod = 1234567

for _ in range(t) :

    n = int(input())
    arr = list(map(int, input().split()))

    prod = 1

    for i in range(n - 1) :
        prod = (prod * arr[i]) % mod

    print(prod)



