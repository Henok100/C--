#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> dynArray(3);

	dynArray[0] = 1;
	dynArray[1] = 2;
	dynArray[2] = 3;

	cout << "Number of integers in dynArray is " << dynArray.size() << endl;
	cout << endl << "Enter new value: ";
	int newValue;
	cin >> newValue;

	dynArray.push_back(newValue);
	cout << "Number of integers in dynArray is " << dynArray.size() << endl;



	return 0;
}

