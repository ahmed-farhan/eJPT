//Practice with pointer variables
#include <iostream>
using namespace std;

int main () {
	
	int a = 23;
	int b = 45;
	int *c;
	int *d;
	
	c = &a;
	d = c;
	
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	
	b = *d;
	cout << b << endl;
	
	*d = 12;
	cout << a << endl;
	
	
	
	
	
	
}
