#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int size=5;
    int arr[5]={1,2,3,4,5};
    int start=0;
    int end=size-1;
   
   while(start<=end){
    if(start==end){
        cout<<arr[start]<<"";
        break;
    }
    cout<<arr[start]<<"";
    cout<<arr[end]<<"";
    start++;
    end--;
   }
    
    return 0;
}
