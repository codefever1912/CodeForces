def get_prod(list):
    prod=1
    for i in range(len(list)):
        prod=prod*list[i]
    return prod

def solve():
    num = input()
    n,m = map(int, num.split())
    list=[]
    prod=1
    for _ in range(n):
        array = input()
        list.append(map(int,array.split()))
    s = input()
    left=0
    right=0
    print(prod&m,sep=' ')
    for i in range(n):
        if s[i]=='L':
            left+=1
            list = list[left:]
            prod = get_prod(list)
            print(prod%m,sep=' ')
        elif s[i]=='R':
            right+=1
            list = list[:right]
            prod = get_prod(list)
            print(prod%m,sep=' ')
    print()

t = int(input())
while(t>0):
    solve()
