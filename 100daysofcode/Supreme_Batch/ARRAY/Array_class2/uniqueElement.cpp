#include<bits/stdc++.h>
using namespace std;

int UniqueElement(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans= ans^arr[i];
    }
    return ans;
}

int main(){
    int size;
    size=5;
    
    int arr[]={1,2,3,2,1};
    
    int uniqueElement = UniqueElement(arr,size);
    cout<<"unique element is"<<uniqueElement<<endl;
    return 0;
}
