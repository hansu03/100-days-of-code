#include<bits/stdc++.h>
using namespace std;

int main(){


    int arr[]={2,3,4,5,6};
    int size = 5;
    //initialize the maxi variable with the minimum possible integer value
    int maxi = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i] > maxi){
    //found a number greater than maxi, update maxi
    maxi =arr[i];
        };
    }

    cout<<"Maximum number is" <<maxi <<endl;

    return 0;
}