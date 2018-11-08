#include <iostream>
using namespace std;

int main() {
	
	int user_value;
	cout << "Enter how many lines tall you want the tree to be: ";
	cin >> user_value;
	cout << endl;
	cin.ignore();
	
	for (int i = 1; i <= user_value*2; i+=2) {
		for (int j=i; j <=user_value*2-2; j+=2) {
			cout << " ";			
		}
		for (int j=1; j<=i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	cin.ignore();
	return 0;
}
