for _ in range(int(input())):
    a, b = map(int, input().split())
    c = [input() for _ in range(a)]
    w1, w2, w3, w4, b1, b2, b3, b4 = 0, 0, 0, 0, 0, 0, 0, 0
    for i in range(a):
        for j in range(b):
            if (i == 0 or i == a - 1 or j == 0 or j == b - 1):
                if c[i][j] == "W":
                    if i == 0:
                        w1 += 1
                    if j == 0:
                        w2 += 1
                    if j == b - 1:
                        w3 += 1
                    if i == a - 1:
                        w4 += 1
                else:
                    if i == 0:
                        b1 += 1
                    if j == 0:
                        b2 += 1
                    if j == b - 1:
                        b3 += 1
                    if i == a - 1:
                        b4 += 1
    if (w1 != 0 and w2 != 0 and w3 != 0 and w4 != 0) or (b1 != 0 and b2 != 0 and b3 != 0 and b4 != 0):
        print("YES")
    else:
        print("NO")