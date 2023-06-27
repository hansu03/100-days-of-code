#include<bits/stdc++.h>
using namespace std;

//making function
void increment (int num){
    num=num+1;
    cout<<"inside function:"<<num<<endl;
}

int main(){

    int value = 10;
    increment(value);

    cout<<"outside fucntion :"<<value<<endl;
    
    
    return 0;
}