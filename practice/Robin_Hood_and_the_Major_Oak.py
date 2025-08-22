def main():
    t = int(input())
    for _ in range(t):
        n,k = map(int, input().split())
        solve(n,k)

def solve(n,k):
    total_leaves = 0
    for i in range(max(1,n-k+1),n+1):
        # leaves = i ** i
        total_leaves += i**i
    
    print("YES" if total_leaves%2==0 else "NO")

# I - 1 II - 1 + 4 = 5

if __name__ == "__main__":
    main()
