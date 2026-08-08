def print_rangoli(size) :
    rows = []

    for i in range(size) :
        left = [chr(96 + j) for j in range(size, size - i - 1, -1)]
        right = left[:-1][::-1]
        row = "-".join(left + right)
        rows.append(row.center(4 * size - 3, "-"))

    print("\n".join(rows + rows[-2::-1]))

if __name__ == '__main__' :
    n = int(input())
    print_rangoli(n)