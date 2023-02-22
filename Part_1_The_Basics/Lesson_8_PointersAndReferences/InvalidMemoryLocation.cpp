#include <iostream>
#include <string>

using namespace std;

int main(){

	bool* israinny;

	cout << "Is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	if (userInput == 'y')
	{
		israinny = new bool;
		*israinny = true;
	}

	cout << "Flag says: " << *israinny << endl;

	delete israinny;

	return 0;
}