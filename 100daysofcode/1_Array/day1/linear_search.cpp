#include<bits/stdc++.h>
using namespace std;

//making function
bool findelement(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
     return false;  //if not found even after traversing whole array
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<"enter key to find"<<endl;

    int key;
    cin>>key;

    if(findelement(arr,size,key)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    
    
    
    return 0;
}