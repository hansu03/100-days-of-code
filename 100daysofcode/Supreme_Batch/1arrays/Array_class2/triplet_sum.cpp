#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr{1,2,3,5,6};
    int element = 8;
    
    for (int i = 0; i < arr.size(); i++){
        for(int j=0;j<arr.size();j++){
            for(int k=0;k<arr.size();k++)
            if(arr[i]+arr[j]+arr[k]==element)
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
        }
    }   
    return 0;
}
