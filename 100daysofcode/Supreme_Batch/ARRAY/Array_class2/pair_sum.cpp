#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{1,2,3};
    int element = 4;
    
    for (int i = 0; i < arr.size(); i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i]+arr[j]==element)
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
    
    return 0;
}
