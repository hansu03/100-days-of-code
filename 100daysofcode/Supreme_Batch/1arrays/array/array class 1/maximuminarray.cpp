#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[5]={1,2,3,4,5};
    int maxi=INT_MIN;

    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi=arr[i];   
        }
        }
    cout<<"maximum element is"<<maxi<<endl;
    
    return 0;
}
