#include <iostream>
#include <string>

using namespace std;

int main(){

	int startingVal = 10;
	int postfixInc = startingVal++;
	
	cout << "After postfix increment: " << postfixInc << endl;
	cout << "Starting value: " << startingVal << endl;

	startingVal = 10;
	int prefixInc = ++startingVal;

	cout << "After prefix increment: " << prefixInc << endl;
	cout << "Starting value: " << startingVal << endl;


	return 0;
}

