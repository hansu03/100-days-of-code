#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    int size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 5;

    int binarySearch = find(arr, size, target);

    if (binarySearch != -1) {
        cout << "Element found at index: " << binarySearch << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
