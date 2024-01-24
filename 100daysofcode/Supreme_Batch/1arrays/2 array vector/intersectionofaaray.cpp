#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1, 3, 4, 5, 6};
    int sizea = 5;
    int brr[] = {3, 4, 5};
    int sizeb = 3;

    vector<int> ans;

    for (int i = 0; i < sizea; i++) {
        // Use a flag to check if the element is found in the second array
        bool found = false;
        for (int j = 0; j < sizeb; j++) {
            if (arr[i] == brr[j]) {
                found = true;
                break; // No need to check further if the element is found
            }
        }
        // If the element is found, add it to the result vector
        if (found) {
            ans.push_back(arr[i]);
        }
    }

    for (auto value : ans) {
        cout << value << " ";
    }

    return 0;
}
