// half pyramid  after 180 degree rotation
#include <iostream>
using namespace std;


int main()
{

	int rows;
    cin >> rows;


	// first for loop is used to identify number of rows
	for (int i = rows; i > 0; i--) {
	
		// second for loop is used to identify number of
		// columns and here the values will be changed
		// according to the first for loop
		for (int j = 0; j <= rows; j++) {
		
			// if j is greater than i then it will print
			// the output otherwise print the space
			if (j >= i) {
				cout << ("*");
			}
			else {
			    cout << (" ");
			}
		}
		cout << ("\n");
	}
	return 0;
}
