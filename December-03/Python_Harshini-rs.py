s=input()
li=list(map(int,s.split(' ')))
while(li!=sorted(li)):
    n=(len(li)//2)
    for i in range(n): 
        li.pop()
print(li)
