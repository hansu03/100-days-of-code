#include<bits/stdc++.h>
using namespace std;

int find uniqueelement(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size(),i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    
}