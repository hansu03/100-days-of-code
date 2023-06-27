#include <iostream>
#include <vector>
using namespace std;

int main() {
    //assuming there is no repetition
     
    int arr[] = {1, 2, 3, 4};
    int brr[] = {3, 4, 9, 10};
    int sizea = sizeof(arr) / sizeof(arr[0]);
    int sizeb = sizeof(brr) / sizeof(brr[0]);
    vector<int> ans;

    //push all elements of vector arr
    for (int i = 0; i < sizea; i++) {
        for(int j = 0; j < sizeb; j++) {
            if (arr[i] == brr[j]) {
                ans.push_back(arr[i]);
            }
        }
    }

    for(auto value : ans) {
        cout << value << " ";
    }

    return 0;
}
