#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(vector<int> v, int t) {
    int start = 0;
    int end = v.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (v[mid] == t) {
            ans = mid;   // Store answer
            start = mid + 1; // Move to the right side to find the last occurrence
        } else if (v[mid] > t) {
            end = mid - 1;   // Search in the left
        } else {
            start = mid + 1;  // Search in the right
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1, 2, 3, 3, 4};
    int t = 3;

    int lastIndex = lastOccurrence(v, t);

    if (lastIndex != -1) {
        cout << "Last occurrence of " << t << " is at index: " << lastIndex << endl;
    } else {
        cout << t << " not found in the array." << endl;
    }
    
    return 0;
}
