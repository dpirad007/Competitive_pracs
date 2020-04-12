n=int(input())
if(n==1):
    print('I hate it')
else:
    a="I hate that"
    a1=" I hate that"
    b=" I love that"
    oe=" I hate it"
    ee=" I love it"
    f=""
    g=""
    if(n%2==0):
        f=f+a
        flag1=0
        for i in range(n-2):
            if(flag1==0):
                f+=b
                flag1=1
            else:
                f+=a1
                flag1=0
        f+=ee
        print(f)
    else:
        g=g+a
        flag1=0
        for i in range(n-2):
            if(flag1==0):
                g+=b
                flag1=1
            else:
                g+=a1
                flag1=0
        g+=oe
        print(g)
        
