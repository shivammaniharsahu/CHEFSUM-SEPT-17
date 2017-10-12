for _ in range(int(input().strip())):
    n,l=int(input()),list(map(int,input().split()))
    print ((l.index(min(l)))+1)  