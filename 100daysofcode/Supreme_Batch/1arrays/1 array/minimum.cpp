#include<bits/stdc++.h>
using namespace std;


int main(){

    int size;
    cout<<"enter size of array:";
    cin>>size;

    int arr[size];
    cout<<"Enter"<<size<<"element in the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }

    cout<<"minimum element is : "<<mini;


    return 0;

}
