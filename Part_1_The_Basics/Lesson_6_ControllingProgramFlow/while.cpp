#include <iostream>
#include <string>
using namespace std;

int main(){

char repeat = 'y';

while(repeat == 'y'){

	int num1 = 0, num2 = 0;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
	cout << "Enter 'y' to do another calculation: " << endl;
	cin >> repeat;
}
	
	return 0;
}