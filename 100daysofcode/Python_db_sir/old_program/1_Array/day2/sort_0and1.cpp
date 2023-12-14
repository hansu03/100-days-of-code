#include <iostream>
#include <vector>
using namespace std;

int main() {


    vector<int> a = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int start = 0;
    int end = a.size() - 1;

    while(start <= end) {
        if (a[start] == 0) {
            start++;
        } else if (a[end] == 1) {
            end--;
        } else {
            swap(a[start], a[end]);
            start++;
            end--;
        }
    }

    // Print the rearranged vector
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}


