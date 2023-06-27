#include<iostream>
using namespace std;

int main()
{
     // declaration
    int row, col;
    cin>> row >> col;


    // pahle ek for loop then again dusra for loop to print
    for(int i =1; i<=row; i++){
        for(int j=1; j<=col;j++)
        {
          cout<<"*";
        }
        cout<<endl;
    }


     // just for checking compiler working or not
     cout << "Hello world";
    return 0;

}