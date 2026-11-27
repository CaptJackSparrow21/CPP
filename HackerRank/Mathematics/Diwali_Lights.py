mod = 10 ** 5

def binpow(a, b) :
    if b == 0 :
        return 1

    if b % 2 :
        return a * binpow(a, b - 1) % mod
    else :
        temp = binpow(a, b // 2) % mod
        return (temp * temp % mod) % mod

t = int(input())

for _ in range(t) :
    n = int(input())
    ans = (binpow(2, n) - 1) % mod
    print(int(ans))
