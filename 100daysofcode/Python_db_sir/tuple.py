#[] ----->  list
#() ----->  tuple
#{} ------> set 

marks =(1,2,3,4,5)
print(marks.index(4))

# Creating a tuple
fruits = ('apple', 'banana', 'orange')

# Accessing elements in a tuple
print("Accessing elements in the tuple:")
print(fruits[0])  # Output: 'apple'
print(fruits[1])  # Output: 'banana'
print(fruits[2])  # Output: 'orange'

# Attempting to modify elements in a tuple (This will raise an error!)
try:
    fruits[1] = 'grapes'
except TypeError:
    print("Tuples are immutable and cannot be modified.")

# Length of the tuple
print("\nLength of the tuple:")
print(len(fruits))  # Output: 3

# Looping through a tuple
print("\nLooping through the tuple:")
for fruit in fruits:
    print(fruit)
# Output: 'apple', 'banana', 'orange'

# Using tuple unpacking
print("\nUsing tuple unpacking:")
a, b, c = fruits
print(a)  # Output: 'apple'
print(b)  # Output: 'banana'
print(c)  # Output: 'orange'


