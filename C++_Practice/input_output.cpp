//Practice with user input and output
#include <iostream>
using namespace std;

int main () {
	
	int userValue;
	
	cout << "This program adds 10 to your input." << endl;
	cout << "Please insert your input: ";
	
	cin >> userValue;
	
	cout << "The value inserted is " << userValue;
	cout << " and the new value is " << userValue + 10 << endl;
	
	cin.ignore();
	cout << "Press Enter to exit...";
	
	return 0;
}
