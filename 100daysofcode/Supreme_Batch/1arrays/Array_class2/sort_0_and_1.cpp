#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {0, 0, 1, 1, 1, 0, 0, 1};
    int size = 8;

    int s = 0;
    int e = size - 1;
    while (s <= e) {
        if (arr[s] == 0) {
            s++;
        }
        if (arr[e] == 1) {
            e--; // Change e++ to e--
        }
        if (arr[s] == 1 && arr[e] == 0) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
