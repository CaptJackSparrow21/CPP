def pilingUp(cubes) :
    left = 0
    right = len(cubes) - 1
    prev = float("inf")

    while left <= right :
        if cubes[left] > prev and cubes[right] > prev :
            return "No"

        if cubes[left] >= cubes[right] :
            if cubes[left] <= prev :
                prev = cubes[left]
                left += 1
            else :
                prev = cubes[right]
                right -= 1
        else :
            if cubes[right] <= prev :
                prev = cubes[right]
                right -= 1
            else :
                prev = cubes[left]
                left += 1

    return "Yes" 

t = int(input())

for _ in range(t) :
    n = int(input())
    cubes = list(map(int, input().split()))
    print(pilingUp(cubes))