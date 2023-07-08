#include<bits/stdc++.h>
using namespace std;



int main(){
    
    // 2 arrays
    vector<int>arr{1,2,3,4,5};
     vector<int>brr{3, 8,9};
    

    //ans naam ka vector
    vector<int> ans;

    //outer lopp of arr vector
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        //for every element , run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                ans.push_back(element);
        }
    }
        
    
    //print answer
    for(auto value: ans){
        cout<<value<<" ";
    }


    }

    return 0;

}