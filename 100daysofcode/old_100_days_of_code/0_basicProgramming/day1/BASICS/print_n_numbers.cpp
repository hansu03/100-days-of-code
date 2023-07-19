#include<bits/stdC++.h>
using namespace std;

//make print numbers function 
void printNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
}
int main(){

    int n;
    cin>>n;

    printNumbers(n);
    
    cout<<"hello " <<endl;
    return 0;
    
    }
