#In Python, range() is a built-in function used to generate a sequence of numbers. It is commonly used in loops to iterate over a specific range of values. The range() function can take one, two, or three arguments, depending on how you want to use it.



# Using range(stop) to generate numbers from 0 to (stop-1)
print("Using range(stop):")
for num in range(5):
    print(num)
# Output: 0, 1, 2, 3, 4

# Using range(start, stop) to generate numbers from start to (stop-1)
print("\nUsing range(start, stop):")
for num in range(2, 6):
    print(num)
# Output: 2, 3, 4, 5

# Using range(start, stop, step) to generate numbers from start to (stop-1) with the specified step
print("\nUsing range(start, stop, step):")
for num in range(1, 10, 2):
    print(num)
# Output: 1, 3, 5, 7, 9

# Converting range output to a list
numbers_list = list(range(5))
print("\nConverting range output to a list:")
print(numbers_list)
# Output: [0, 1, 2, 3, 4]
