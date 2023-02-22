#include <iostream>
#include <string>
using namespace std;

int main(){

	enum DaysofWeeek{
		segno = 1,
		maksegno,
		erob,
		hamus,
		arb,
		kidame,
		ehud
	};

	int Daynum = 0;
	cout << "Enter the day number to find out the exam: ";
	cin >> Daynum;

	if (Daynum == segno)
		cout << "The exam at segno is Math." << endl;
	else if (Daynum == maksegno)
		cout << "The exam at maksegno is Physics." << endl;
	else if (Daynum == erob)
		cout << "The exam at maksegno is English." << endl;
	else if (Daynum == hamus)
		cout << "The exam at maksegno is Amharic." << endl;
	else if (Daynum == arb)
		cout << "The exam at maksegno is Chemisry." << endl;
	else if (Daynum == kidame)
		cout << "The exam at maksegno is Sport." << endl;
	else if (Daynum == ehud)
		cout << "The exam at ehud is Biology." << endl;
	else
		cout << "Wrong input!!" << endl;

	return 0;
}

