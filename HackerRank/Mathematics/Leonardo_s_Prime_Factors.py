def primeCount(n) :
    primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41
              , 43, 47, 53]

    product = 1
    cnt = 0

    for p in primes :
        product *= p

        if product > n : 
            break

        cnt += 1

    return cnt

q = int(input())

for _ in range(q) :
    n = int(input())
    print(primeCount(n))