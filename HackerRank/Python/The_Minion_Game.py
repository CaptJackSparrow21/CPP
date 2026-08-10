def minion_game(string) :
    n = len(s)
    kevin = 0
    stuart = 0

    for i in range(n) :
        if s[i] in "AEIOU" :
            kevin += n - i
        else :
            stuart += n - i

    if kevin > stuart :
        print("Kevin", kevin)
    elif kevin < stuart :
        print("Stuart", stuart)
    else :
        print("Draw")

if __name__ == '__main__' :
    s = input()
    minion_game(s)