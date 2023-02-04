#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int threeRowTwoCols [3][2]  = {{1, 2}, {3, 4}, {5, 6}};

	cout << "Row 0: " << threeRowTwoCols[0][0] << " "\
	<< threeRowTwoCols[0][1] << endl;
	cout << "Row 1: " << threeRowTwoCols[1][0] << " "\
	<< threeRowTwoCols[1][1] << endl;
	cout << "Row 2: " << threeRowTwoCols[2][0] << " "\
	<< threeRowTwoCols[2][1] << endl;

	return 0;
}

