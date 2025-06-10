def find_value_after_m_seconds(n, m):
    if m == 0:
        return n
    elif m >= 60:
        # For very large m, the sequence stabilizes
        return (1 << 60) - 1
    else:
        # Simulate the process for smaller m
        result = n
        for _ in range(m):
            if result == 0:
                break
            result |= result >> 1
        return result

# Read input
t = int(input())
results = []
for _ in range(t):
    n, m = map(int, input().split())
    results.append(find_value_after_m_seconds(n, m))

# Output results
for res in results:
    print(res)
