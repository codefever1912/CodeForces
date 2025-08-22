import math

def prime_factors_count(n):
    """Return the number of prime factors (with multiplicity) of n."""
    count = 0
    while n % 2 == 0:
        n //= 2
        count += 1
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            n //= i
            count += 1
    if n > 2:
        count += 1
    return count

def max_score(l, r):
    max_divisions = 0
    best_x = l
    
    # Check powers of 2
    x = 1
    while x <= r:
        if x >= l:
            divisions = prime_factors_count(x)
            if divisions > max_divisions:
                max_divisions = divisions
                best_x = x
        x *= 2

    # Check products of small primes raised to powers
    for base in range(3, 10):
        x = base
        while x <= r:
            if x >= l:
                divisions = prime_factors_count(x)
                if divisions > max_divisions:
                    max_divisions = divisions
                    best_x = x
            x *= base

    return max_divisions

# Input
num = input()
num = num.split(",")
l,r = int(num[0]),int(num[1])

# Calculate the maximum score
result = max_score(l, r)
print(result)