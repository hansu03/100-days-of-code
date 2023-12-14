#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int arr[5]={0,1,0,1,0};
    int zeroCount=0;
    int oneCount=0;

    for(int i=0;i<5;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"no of zeores"<<zeroCount<<endl;
    cout<<"no of ones"<<oneCount<<endl;
    
    return 0;
}
