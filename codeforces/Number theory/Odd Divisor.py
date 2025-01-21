t=int(input(""))
for _ in range(t):
    n=int(input(""))
    n=bin(n)
    c=n.count('1')
    if c==1:
        print("NO")
    else:
        print("YES")