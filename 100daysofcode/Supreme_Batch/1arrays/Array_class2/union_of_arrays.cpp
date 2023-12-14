#include<bits/stdc++.h>
using namespace std;

int main(){
    int sizea = 5;
    int arr[]={1,2,3,4,5};
    int sizeb=3;
    int brr[]={6,7,8};

    vector<int>ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }

    for(int j=0;j<sizeb;j++){
        ans.push_back(brr[j]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        
    }

    return 0;
}
