#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){

	cout << "Enter a number (0 - 255): ";
	unsigned int num = 0;
	cin >> num;

	bitset<8> numInBit = (num);
	cout << "Number in binary is: " << numInBit << endl;

	cout << "half of Num is: " << (num >> 1) << endl;
	cout << "Double of Num is: " << (num << 1) << endl;

	bitset<8> bitwisenot = (~num);
	cout << "Bitwise NOT '~' of Number is : " << bitwisenot << endl;

	return 0;
}

