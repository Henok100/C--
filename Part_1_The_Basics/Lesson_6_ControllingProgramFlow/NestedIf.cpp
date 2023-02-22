#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Enter two numbers: ";
	int firstNum = 0, secondNum = 0;
	cin >> firstNum >> secondNum;

	cout << "Enter 'd' for division, anything else for multiplication: ";
	char userSelection = '\0';
	cin >> userSelection;

	if (userSelection == 'd'){
		if (secondNum == 0)
			cout << "Division by zero is not allowed!" << endl;
		else
			cout << firstNum << " / " << secondNum << " = " << firstNum/secondNum << endl;
	}
	else{
		cout << firstNum << " x " << secondNum << " = " << firstNum * secondNum << endl;
	}

	return 0;
}

