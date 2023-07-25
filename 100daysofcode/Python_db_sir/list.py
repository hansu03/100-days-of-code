#In Python, a list is a built-in data type used to store a collection of elements in an ordered manner. Lists are one of the most versatile and widely used data structures in Python, and they can hold items of different data types, including integers, floats, strings, and even other lists.

# Method 1: Using square brackets []
my_list = [1, 2, 3, 4, 5]

# Method 2: Using list() function
another_list = list(["apple", "banana", "orange"])

fruits = ["apple", "banana", "orange"]
print(fruits[0])  # Output: "apple"
print(fruits[1])  # Output: "banana"
print(fruits[2])  # Output: "orange"

fruits = ["apple", "banana", "orange"]
fruits[1] = "grapes"
print(fruits)  # Output: ["apple", "grapes", "orange"]

fruits = ["apple", "banana", "orange"]
print(len(fruits))  # Output: 3

fruits = ["apple", "banana"]
fruits.append("orange")
print(fruits)  # Output: ["apple", "banana", "orange"]

fruits = ["apple", "banana", "orange"]
fruits.remove("banana")
print(fruits)  # Output: ["apple", "orange"]

fruits = ["apple", "banana", "orange"]
for fruit in fruits:
    print(fruit)
# Output: "apple", "banana", "orange"
