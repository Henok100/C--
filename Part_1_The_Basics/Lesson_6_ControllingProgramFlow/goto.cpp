#include <iostream>
#include <string>
using namespace std;

int main(){

Start:
	int num1 = 0, num2 = 0;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
	goto Start;

	return 0;
}

