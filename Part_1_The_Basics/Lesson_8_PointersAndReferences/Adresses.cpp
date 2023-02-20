#include <iostream>
#include <string>
using namespace std;

int main(){

	int age = 90;
	const double PI = 3.145624;

	cout << "Age is located at: " << &age << endl;
	cout << "PI is located at: " << &PI << endl;

	return 0;
}
