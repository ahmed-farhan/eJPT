//Class to practice defining and working with variables in C++
#include <iostream>
using namespace std;

int main () {
	//Declaration of Variables
	int a = 0;
	int b = 2;
	int sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	a = 3;
	sum = a + b;
	
	cout << "The value of variable sum is: " << sum << endl;
	
	return 0;
}
