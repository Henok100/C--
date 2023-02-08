#include <iostream>
#include <string>

using namespace std;

int main(){

	cout << "Enter two numbers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	cout << "Do you want multiplication or addition? [Enter 'm' for multiply, anything else for addition!]" << endl;
	auto userSelection = 0;
	cin >> userSelection;

	int result = 0;

	if (userSelection == 'm')
		result = num1 * num2;
	else	
		result = num1 + num2;
	
	cout << "Result is " << result << endl;

	return 0;
}

