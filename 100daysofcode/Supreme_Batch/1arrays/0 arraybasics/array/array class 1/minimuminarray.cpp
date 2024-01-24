#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[5]={1,2,3,4,5};
    int mini=INT_MAX;

    for(int i=0;i<5;i++){
        if(arr[i]<mini){
            mini=arr[i];   
        }
        }
    cout<<"maximum element is"<<mini<<endl;
    
    return 0;
}
