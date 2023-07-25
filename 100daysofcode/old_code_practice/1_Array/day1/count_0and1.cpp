#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[]={1,0,0,0,1,0,1,1,0,0,0,0,1,1,1};
    int size=15;

    int numzero=0;
    int numone=1;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            //if zero found , increment numzeo
            numzero++;
        }
        if(arr[i]==1)
            //if one found , increment numone
            numone++;
        }
        

        cout<<"nummber of zeroes are:"<<numzero<<endl;
        cout<<"number of ones are:"<<numone<<endl;
    
    
    
    return 0;
}