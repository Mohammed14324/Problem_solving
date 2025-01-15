lis={"-":0}
t=int(input(""))
for i in range(t):
    inp=input("")
    if inp not in lis:
        lis[inp]=1
        print("OK")
    else:
        print(inp+str(lis[inp]))
        lis[inp]+=1
        