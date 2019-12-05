def h_index(n,s):
    li=list(map(int,s.split()))
    for i in li:
        x=int(i)
        count=0
        for j in li:
            if(x<=int(j)):
                count=count+1
        if(count>=x):
            print(x)
            break
    return


n=int(input())
s=input()
h_index(n,s)
