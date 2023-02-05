#include <iostream>
#include <string>

using namespace std;

int main(){

	cout << "Enter two integers: ";
	int first = 0, second = 0;
	cin >> first >> second;	

	cout << first << " + " << second << " = " << first + second << endl;
	cout << first << " - " << second << " = " << first - second << endl;
	cout << first << " / " << second << " = " << first / second << endl;
	cout << first << " * " << second << " = " << first * second << endl;
	cout << first << " % " << second << " = " << first % second << endl;


	return 0;
}

