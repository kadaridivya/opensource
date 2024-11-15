n,x,y=list(map(int,input().split(' ')))
if(y%x==0 and x//y<=n):
    print("YES")
else:
    print("NO")
