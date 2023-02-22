#include <iostream>
#include <string>

using namespace std;

int main(){

	int myInts[5];

	int* pointsTomyInts = myInts;

	cout << pointsTomyInts << " " << myInts << endl;
	cout << pointsTomyInts + 1 << " " << &myInts[1] << endl;

	return 0;
}