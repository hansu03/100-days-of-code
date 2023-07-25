#include <bits/stdc++.h>
using namespace std;

// Function to perform a linear search in an array
bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;  // Return true if the key is found
        }
    }
    return false;  // Return false if the key is not found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;


    bool found = linearSearch(arr, size, key);
    if (found) {
        cout << "Element found in the array" << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;

bool find(int arr[], int size, int key){
    //liner search 
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return true;
    }
    //not present 
    return false;
}

int main(){


int arr [5] = {1,3,4,5,6};
int size = 5 ;

cout<<"Enter key to find"<<endl;
int key;
cin>>key;

if(find(arr,size,key)){
    cout<<"Found";
}
else{
    cout<<"not found";
}


return 0;

}
 
*/





