for _ in range(int(input(""))):
    n=int(input(""))
    s=input("")
    count=0
    i=2
    while i<n:
        if s[i-2:i+1]=="map" or s[i-2:i+1]=="pie":
            count+=1
            i+=2
        i+=1
    print(count)