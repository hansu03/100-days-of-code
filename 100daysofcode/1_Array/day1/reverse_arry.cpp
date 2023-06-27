#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[8] = {10, 20, 30, 40, 50, 70, 80};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (start <= end) {
        // Step 1: Swap elements
        swap(arr[start], arr[end]);

        // Step 2: Increment start index
        start++;

        // Step 3: Decrement end index
        end--;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
