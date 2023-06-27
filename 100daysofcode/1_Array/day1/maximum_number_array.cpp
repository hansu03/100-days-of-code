#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={1,2,8,9,23,45,67,98,42,112};
    int size=10;

    //initialize the max variable with min.possible integer value
    int maxi=INT_MIN;


    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            //found a number greater than maxi, upadte maxi
            maxi = arr[i];
        }
    }

    cout<<"maximum number is "<<maxi<<endl;

    
    return 0;
}