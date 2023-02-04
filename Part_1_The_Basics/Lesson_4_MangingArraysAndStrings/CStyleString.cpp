#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char sayHi[3] = {'H', 'I', '\0'};

	cout << sayHi << endl;
	cout << "Size of sayHi is " << sizeof(sayHi) << endl;

	return 0;
}

