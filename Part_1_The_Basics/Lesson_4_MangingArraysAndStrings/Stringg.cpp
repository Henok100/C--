#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string first ("First");
	cout << first << endl;

	cout << "Enter your name: ";
	string name;
	getline(cin, name);

	cout << "Your name is " << name << endl;
	cout << "The length of your name is " << name.length() << endl;

	return 0;
}

