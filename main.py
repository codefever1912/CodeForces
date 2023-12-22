n = int(input())
a = []
inputs = input().split()
count=0
for i in inputs:
    if i not in a:
        a.append(i)
        count+=1
print(count)