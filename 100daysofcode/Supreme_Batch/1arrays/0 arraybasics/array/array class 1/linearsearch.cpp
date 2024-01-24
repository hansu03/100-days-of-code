#include<bits/stdc++.h>
using namespace std;

bool findElement(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false; // Return false if the element is not found
}

int main() {
    int size;
    cin >> size;

    int arr[size]; // Declare an array of the specified size

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    int key;
    cin >> key;

    bool found = findElement(arr, size, key); // Call the findElement function

    if (found) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
