//Class to gain an understanding of global variables
#include <iostream>
using namespace std;

//Declaration of global variables
int global_variable = 4;

int main () {
	
	cout << "The value of global_variable: " << global_variable << endl;
	
	//Declaration of local variables
	int global_variable = 2;
	
	cout << "The value of global_variable: " << global_variable << endl;
	
	return 0;
}
