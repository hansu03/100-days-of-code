#include<bits/stdc++.h>
using namespace std;

int main(){


    int arr[]={2,3,4,5,6};
    int size = 5;
    //initialize the maxi variable with the minimum possible integer value
    int mini = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i] < mini){
    //found a number greater than maxi, update maxi
    mini =arr[i];
        };
    }

    cout<<"Maximum number is" <<mini <<endl;

    return 0;
}