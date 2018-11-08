#include <iostream>
using namespace std;

int main() {
	
	int user_value = 0;
	do {
		
		cout << " 1 - Addition\n";
		cout << " 2 - Subtration\n";
		cout << " 3 - Exit Porgram\n";
		cout << "insert a number: ";
		cin >> user_value;
		cin.ignore();
		
		switch (user_value){
			case 1:
				cout << "Addition code\n";
				break;
			case 2:
				cout << "Subtratcion code\n";
				break;				
		}
	} while (user_value != 3);
	
	cout << "Bye";
	cin.ignore();
	return 0;
	
}
