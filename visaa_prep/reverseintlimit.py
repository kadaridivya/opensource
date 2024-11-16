def reverse_integer(n):
    MIN_INT=-2**31
    MAX_INT=2**31-1
    sign = -1 if n < 0 else 1
    n*=sign
    reversed_n=int(str(n)[::-1])
    reversed_n *= sign
    if reversed_n < MIN_INT or reversed_n > MAX_INT:
        return 0
    return reversed_n
n=int(input())
print(reverse_integer(n))
