#include <iostream>
#include <string>
using namespace std;

int main(){

	for(char userSelection = 'y'; userSelection == 'y';){
		int x = 0, y = 0;
		cout << "Enter two numbers to add: ";
		cin >> x >> y;

		cout << "The addition is " << x + y << endl;
		cout << "\nDo you wish to add another numbers? Please enter 'y': ";
		cin >> userSelection;
	}

	return 0;
}