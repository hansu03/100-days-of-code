#include<Bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Double of each element:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]*2<<" ";
    }

    cout<<endl;


    return 0;
}
