#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){

	cout << "Enter a number: ";
	int number = 0;
	cin >> number;

	cout << "After +=10 " << (number += 10) << endl;
	cout << "After -=10 " << (number -= 10) << endl;
	cout << "After *=10 " << (number *= 10) << endl;
	cout << "After /=10 " << (number /= 10) << endl;
	cout << "After %=3 " << (number %= 3) << endl;
	cout << "After <<=2 " << (number <<= 2) << endl;
	cout << "After >>=2 " << (number >>= 2) << endl;
	cout << "After +=10 " << (number += 10) << endl;


	return 0;
}

