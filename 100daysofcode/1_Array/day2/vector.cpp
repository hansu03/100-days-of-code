#include<bits/stdc++.h>
using namespace std;

int main() {
    // Creating a vector
    vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements
    cout << "First element: " << numbers[0] << std::endl;
    cout << "Second element: " << numbers.at(1) << std::endl;

    // Modifying elements
    numbers[2] = 40;

    // Iterating over the vector
    cout << "All elements: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Size and capacity
    cout << "Size of the vector: " << numbers.size() << std::endl;
    cout << "Capacity of the vector: " << numbers.capacity() << std::endl;

    // Clearing the vector
    numbers.clear();

    // Checking if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty" << endl;
    }

    // Resizing the vector
    numbers.resize(5);

    // Inserting elements at a specific position
    numbers.insert(numbers.begin() + 2, 50);
    numbers.insert(numbers.begin() + 3, 2, 60);

    // Erasing elements at a specific position
    numbers.erase(numbers.begin() + 1);

    // Removing elements by value
    numbers.erase(remove(numbers.begin(), numbers.end(), 60), numbers.end());

    // Sorting the vector
    sort(numbers.begin(), numbers.end());

    // Reversing the vector
    reverse(numbers.begin(), numbers.end());

    // Output the final vector
    cout << "Final elements: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
