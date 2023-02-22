#include <iostream>
#include <string>

using namespace std;

int main(){

	int myInts[5] = {1, 2, 3, 4 , 5};

	int* pointsTomyInts = myInts;

	cout << pointsTomyInts[0] << " " << *myInts << endl;
	cout << *(pointsTomyInts + 1) << " " << myInts[1] << endl;

	return 0;
}