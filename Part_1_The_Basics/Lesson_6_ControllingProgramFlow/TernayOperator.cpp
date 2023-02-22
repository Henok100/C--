#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "Enter two numbers: ";
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;

	int max = (num1 > num2) ? num1:num2;

	cout << "Maximum is " << max << endl;

	return 0;
}

