#include<Bits/stdc++.h>
using namespace std;

int main(){

   //create vector
   vector<bool>arr;

  // int ans = (sizeof(arr)/sizeof(char));
  // cout<<ans<<endl;

   cout<<arr.size()<<endl;
   cout<<arr.capacity()<<endl;

   //insert element 
   arr.push_back(5);
   arr.push_back(6);

   //print
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

   //remove  or delete 
   arr.pop_back();

   //print
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

  vector<int>brr(10);
  cout<<"size of b"<<brr.size();
  cout<<"capacity of b" <<brr.capacity()<<endl;

  for(int i=0;i<brr.size();i++){
    cout<<brr[i]<< " ";
  }
  cout<<endl;
 
  cout<<"printing crr"<<endl;
  vector<int>crr{10,20,30,40,50};
  cout<<"Vector crr is empty or not "<<crr.empty()<<endl;

  vector<int>drr;
  cout<<"Vector drr is empty or not "<<drr.empty();

return 0;
}