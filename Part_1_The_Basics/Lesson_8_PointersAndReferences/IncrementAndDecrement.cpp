#include <iostream>
#include <string>
using namespace std;

int main(){

	cout << "How many integers you want to enter? ";
	int Entries = 0;
	cin >> Entries;

	int * pointsToInts = new int[Entries];

	cout << "Allocated for " << Entries << " Integers\n";
	for (int x = 0; x < Entries; x++)
	{
		cout << "Enter number: ";
		cin >> *(pointsToInts + x);
	}

	cout << "\nDisplaying the Integers.. \n";
	for (int x = 0; x < Entries; x++)
	{
		cout << *(pointsToInts + x) << endl;
	}

	pointsToInts -= Entries;

	delete [] pointsToInts;
	
	return 0;
}