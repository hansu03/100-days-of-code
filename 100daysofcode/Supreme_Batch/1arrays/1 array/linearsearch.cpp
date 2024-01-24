#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){

    int size;
    cout<<"enter size of array:";
    cin>>size;

    int arr[size];
    cout<<"Enter"<<size<<"element in the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    bool found = linearSearch(arr, size, key);
    if (found) {
        cout << "Element found in the array" << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;

}
