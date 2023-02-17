#include <iostream>
#include <string>

using namespace std;

int main(){

	string inputstr;
	cout << "Enter your text: ";
	getline (cin, inputstr);

	char copied[20] = {}; // only 20 characters

	if (inputstr.length() < 20){
		cout << "Input string is within bound, creating copy.." << endl;
		inputstr.copy(copied, inputstr.length());
		cout << "Copied string is: " << copied << endl;
	}
	else {
		cout << "Input string is out of bound" << endl;
	}

	return 0;
}

