#include<bits/stdC++.h>
using namespace std;

//check prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
//make print numbers function 
void printprime(int n) {
    
    for (int i = 1; i <= n; ++i) {
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}
int main(){

    int n;
    cin>>n;

    printprime(n);
    
    cout<<"hello " <<endl;
    return 0;
    
    }