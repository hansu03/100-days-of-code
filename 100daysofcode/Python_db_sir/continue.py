# Using continue to skip a particular item
fruits = ['apple', 'banana', 'orange', 'grapes']

for fruit in fruits:
    if fruit == 'banana':
        continue
    print(fruit)
