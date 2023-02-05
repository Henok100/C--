#include <iostream>
#include <string>

using namespace std;

int main(){

	cout << "Do you want to be professional C++ programmer? (enter '1' of yes '0' for No): ";
	bool firstResponse;
	cin >> firstResponse;

	cout << "Do you agree to dedicate 5 hours to study C++ a day? (enter '1' of yes '0' for No): ";
	bool secondResponse;
	cin >> secondResponse;

	cout << "Will you be a C++ programmer in 3 month? " << (firstResponse && secondResponse) << endl;


	return 0;
}

