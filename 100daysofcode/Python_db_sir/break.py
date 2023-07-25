# Using break to exit the loop when the value is found
fruits = ['apple', 'banana', 'orange', 'grapes']

search_for = 'orange'
for fruit in fruits:
    if fruit == search_for:
        print(f"{search_for} found!")
        break
else:
    print(f"{search_for} not found!")
