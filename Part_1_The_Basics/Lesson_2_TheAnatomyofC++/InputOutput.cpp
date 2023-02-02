#include <iostream>
#include <string>

using namespace std;

int main(){
	
	// Declare a variable to store an integer
	int inputNumber;

	cout << "Please enter a number: ";

	// Store the integer given by the user input
	cin >> inputNumber;

	// Declare a variable to store a string(text)
	string Name;

	cout << "Please enter your name: ";
	cin >> Name;

	cout << Name << " entered " << inputNumber << endl;
	
	return 0;
}

