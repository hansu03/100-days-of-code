#include<bits/stdc++.h>
using namespace std;


int main(){
    int  size=6;
    int arr[6]={1,2,3,4,5,6};
    int start=0;
    int end=5;
    while(start<=end){
        if(start==end){
            cout<<arr[start]<<endl;
            break;
        }
        cout<<arr[start]<<" "<<endl;
        cout<<arr[end]<<" "<<endl;    
        start++;
        end--;    
    }


    return 0;

}
