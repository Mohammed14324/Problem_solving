for _ in range(int(input(''))):
    n = int(input(''))
    ms = 0
    mn = 0

    for i in range(2, n + 1):
        mm = n // i
        sm = (mm * (mm + 1) // 2) * i
        
        if sm > ms:
            ms = sm
            mn = i

    print(mn)