#include<Bits/stdc++.h>
using namespace std;

bool findElement(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
    }


int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key:";
    cin>>key;

    if (findElement(arr, n, key)){
        cout<<"element found in array"<<endl;
    }else{
        cout<<"element not found in array";
}

    return 0;
}
