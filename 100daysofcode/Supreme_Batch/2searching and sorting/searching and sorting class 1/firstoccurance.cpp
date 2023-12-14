#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>v, int t){
    int start = 0;
    int end = v.size() - 1;
    int ans=-1;
    

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (v[mid] == t) {
            ans= mid;   //store answer
            end=mid-1;

        } else if (v[mid] > t) { 
            end=mid-1;   //search in left
        } 
        else {
            start = mid + 1;  // search in right
        } 
        mid=start+(end-start)/2;   // update mid again
    }
    return ans;
}


int main() {
    vector<int>v = {1, 2, 3,3,4};
    int t=3;

    int firstIndex = firstOccurance(v, t);

    if (firstIndex != -1) {
        cout << "First occurrence of " << t << " is at index: " << firstIndex << endl;
    } else {
        cout << t << " not found in the array." << endl;
    }
return 0;
}
