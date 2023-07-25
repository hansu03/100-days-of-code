# Operator Precedence example
a = 5
b = 3
c = 2

# Expression with parentheses to control operator precedence
result1 = a + b * c
result2 = (a + b) * c
result3 = a + b / c
result4 = (a + b) / c
result5 = a * b + c
result6 = a * (b + c)

# Output
print("a + b * c =", result1)  # Output: 11 (3 * 2 = 6, then 5 + 6 = 11)
print("(a + b) * c =", result2)  # Output: 16 (5 + 3 = 8, then 8 * 2 = 16)
print("a + b / c =", result3)  # Output: 6.5 (3 / 2 = 1.5, then 5 + 1.5 = 6.5)
print("(a + b) / c =", result4)  # Output: 4.0 (5 + 3 = 8, then 8 / 2 = 4.0)
print("a * b + c =", result5)  # Output: 17 (5 * 3 = 15, then 15 + 2 = 17)
print("a * (b + c) =", result6)  # Output: 25 (3 + 2 = 5, then 5 * 5 = 25)
