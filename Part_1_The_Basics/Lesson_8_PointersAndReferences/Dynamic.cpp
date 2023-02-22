#include <iostream>
#include <string>
using namespace std;

int main(){

	int age = 90;
	const double PI = 3.145624;

	int* AgePtr = new int;
	*AgePtr = age;

	cout << age << " is located at: " << AgePtr << endl;
	cout << *AgePtr << " is located at: " << &age << endl;
	
	delete AgePtr;
	
	return 0;
}
