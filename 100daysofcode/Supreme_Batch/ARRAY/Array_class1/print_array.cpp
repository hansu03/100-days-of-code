#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){

    int size;
    cout<<"enter size of array";
    cin>>size;

    int arr[size];

    //take input of elements in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    
    cout<<"array elements are";
    printArray(arr,size);



    return 0;
}