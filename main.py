t = int(input())

while t > 0:
    k = int(input())
    num = 1 
    curr = ""
    while k > 0:
        curr = bin(num)[2:]
        if "11" not in curr:
            k -= 1
        num += 1
    
    print(curr)
    t -= 1

"""
01, 10, 100, 101, 110, 111, 10000
"""
