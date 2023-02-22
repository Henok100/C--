#include <iostream>
#include <string>
using namespace std;

int main(){

	int age = 90;
	const double PI = 3.145624;

	int* AgePtr = &age;

	cout << age << " is located at: " << AgePtr << endl;
	cout << *AgePtr << " is located at: " << &age << endl;
	return 0;
}
