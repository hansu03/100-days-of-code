#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={1,2,8,9,23,45,67,98,42,112};
    int size=10;

    //initialize the max variable with min.possible integer value
    int mini=INT_MAX;


    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            //found a number less than mini, upadte mini
            mini = arr[i];
        }
    }

    cout<<"maximum number is "<<mini<<endl;

    
    return 0;
}