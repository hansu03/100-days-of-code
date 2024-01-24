#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[5]={0,1,0,1,0};
    int zeroCount=0;
    int oneCount=0;

    for(int i=0;i<5;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else{
             oneCount++;
        }
    }

    cout<<"no of zeroes are:"<<zeroCount<<endl;
    cout<<"no of ones are:"<<oneCount<<endl;

    return 0;

}
