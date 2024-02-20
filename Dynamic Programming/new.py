def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def count_divisors(arr, x):
    n = len(arr)
    prefix_gcd = [0] * (n + 1)

    for i in range(1, n + 1):
        prefix_gcd[i] = gcd(prefix_gcd[i - 1], arr[i - 1])

    result = 0
    for c in range(1, x + 1):
        if prefix_gcd[n] % c == 0:
            result += 1

    return result

def GodWish(T, test_cases):
    results = []
    for t in range(T):
        N, X, A = test_cases[t]
        result = count_divisors(A, X)
        results.append(result)
    
    return results

# Input
T = int(input())
test_cases = []
for _ in range(T):
    N, X = map(int, input().split())
    A = list(map(int, input().split()))
    test_cases.append((N, X, A))

# Call the function and print the output
results = GodWish(T, test_cases)
for result in results:
    print(result)
