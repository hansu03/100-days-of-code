# Built-in modules
import math
import random

# User-defined functions
def greet_person(name):
    print(f"Hello, {name}!")

def calculate_circle_area(radius):
    return math.pi * radius ** 2

def roll_dice():
    return random.randint(1, 6)

# Using the functions
greet_person("Alice")

radius = 5
area = calculate_circle_area(radius)
print(f"Circle area with radius {radius}: {area:.2f}")

dice_roll = roll_dice()
print(f"Dice roll result: {dice_roll}")
