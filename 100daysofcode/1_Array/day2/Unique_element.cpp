#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter the elements"<<endl;

    //taking input
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int UniqueElement=findUnique(arr);
    cout<<"unique element is"<<UniqueElement;

    return 0;

}