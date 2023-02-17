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
	cout << "Enter the day number (segno = 1) to find out the exam: ";
	cin >> Daynum;

	switch (Daynum){

		case segno:
			cout << "The exam at segno is Math." << endl;
			break;
		case maksegno:
			cout << "The exam at maksegno is Physics." << endl;
			break;
		case erob:
			cout << "The exam at erob is English." << endl;
			break;
		case hamus:
			cout << "The exam at hamus is Chemistry." << endl;
			break;
		case arb:
			cout << "The exam at arb is Biology." << endl;
			break;
		case kidame:
			cout << "The exam at kidame is Sport." << endl;
			break;
		case ehud:
			cout << "The exam at ehud is Drawing." << endl;
			break;
		default:
			cout << "Wrong input!!" << endl;
			break;
	}
	
	return 0;
}

