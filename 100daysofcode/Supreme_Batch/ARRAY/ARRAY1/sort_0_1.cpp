#include<Bits/stdc++.h>
using namespace std;

int main(){

    int size = 8;
    int arr[]={0,1,1,0,0,1,1,0};
    int numzero=0;
    int numone=0;

    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            cout<<numzero++;
        }
        if(arr[i] == 1){ 
            cout<<numone++;
        }
    }

    cout<<"no of zeroes"<<numzero<<endl;
    cout<<"no of ones"<<numone<<endl;
    return 0;
}


//wap to sort and print 0 and 1

