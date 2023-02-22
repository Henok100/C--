#include <iostream>
#include <string>
using namespace std;

int Factorial(int num);

int main(){

	cout << "This program calculates the Factorial of a number.\n\n";
	cout << "Please enter the number: ";
	int num = 0;
	cout << "\nNumber = "; 
	cin >> num;

	cout << "\nThe Factorial is " << Factorial(num) << endl;

	return 0;
}

int Factorial (int num){
	if (num < 1)
	{
		return 1;
	}
	else
		return num * Factorial(num - 1);
}