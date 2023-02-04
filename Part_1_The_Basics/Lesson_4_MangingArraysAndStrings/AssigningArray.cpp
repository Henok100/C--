#include <iostream>
#include <string>

using namespace std;

int main(){
	
	const int ARRAY_LENGTH = 5;

	int myNumbers[ARRAY_LENGTH] = {1, 2, 3, 4, 5};

	cout << "The first number is " << myNumbers[0] << endl;
	cout << "The second number is " << myNumbers[1] << endl;
	cout << "The third number is " << myNumbers[2] << endl;
	cout << "The fourth number is " << myNumbers[3] << endl;
	cout << "The fifth number is " << myNumbers[4] << endl;

	cout << "Enter the index element to be changed: ";
	int index;
	cin >> index;

	cout << "Enter new value: ";
	int newValue;
	cin >> newValue;

	myNumbers[index] = newValue;

	cout << "The first number is " << myNumbers[0] << endl;
	cout << "The second number is " << myNumbers[1] << endl;
	cout << "The third number is " << myNumbers[2] << endl;
	cout << "The fourth number is " << myNumbers[3] << endl;
	cout << "The fifth number is " << myNumbers[4] << endl;


	return 0;
}

