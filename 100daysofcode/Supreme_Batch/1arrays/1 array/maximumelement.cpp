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

    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }

    cout<<"maximum element is"<<maxi;


    return 0;

}
