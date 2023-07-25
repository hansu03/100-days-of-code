def main():
    # Creating a dictionary
    my_dict = {'apple': 1, 'banana': 2, 'orange': 3}
    print("Original Dictionary:", my_dict)

    # Accessing values
    print("Value of 'apple':", my_dict['apple'])
    print("Value of 'orange':", my_dict['orange'])

    # Modifying values
    my_dict['banana'] = 5
    print("Modified Dictionary:", my_dict)

    # Adding new items
    my_dict['grape'] = 4
    print("Dictionary after adding 'grape':", my_dict)

    # Removing an item
    del my_dict['banana']
    print("Dictionary after removing 'banana':", my_dict)

    # Checking if a key exists
    print("'apple' exists in the dictionary:", 'apple' in my_dict)
    print("'banana' exists in the dictionary:", 'banana' in my_dict)

if __name__ == "__main__":
    main()
