# Example: Counting the number of 1s in the binary representation of a number
def count_set_bits(n):
    count = 0
    while n:
        count += n & 1
        n >>= 1
    return count

n = 29  # Binary: 11101
print(count_set_bits(n))  # Output: 4
