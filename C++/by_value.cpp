#include <iostream>
using namespace std;

int sum (int x) {
	x = 10 + x;
	return(x);
}

int main() {
	
	int x = 5;
	
	cout << "The result of 10 + " << x << " is " << sum(x) << endl;
	cout << "The value of x is " << x;
	
	cin.ignore();
	
}
