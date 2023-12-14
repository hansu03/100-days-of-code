#include<bits/stdc++.h>
using namespace std;

int find(int arr[], int size, int target){
    int i;
    int start =0;
    int end=size-1;
    int mid = start+(end-start)/2;

    if(arr[i]==target){
        return mid;
    }
    else if(arr[mid]>target){
        //search in left
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    return -1;
    }

int main(){
    int size=5;
    int arr[5]={1,2,3,4,5};