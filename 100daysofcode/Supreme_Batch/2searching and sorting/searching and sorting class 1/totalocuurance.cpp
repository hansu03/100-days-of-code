#include <bits/stdc++.h>
using namespace std;


int main() {
    vector<int>v = {1, 2, 3,3,4};
    int target=3;
   
   auto first = upper_bound(v.begin(),v.end(),target);

   auto last = lower_bound(v.begin(),v.end(),target);

   
   int totalOccurrence = last - first +1;

   cout << "Total occurrence of " << target << " is: " << totalOccurrence << endl;



    
return 0;
}
