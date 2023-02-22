#include <iostream>
#include <string>
using namespace std;

int main(){

	const int ARRAY_LENGTH = 7;
	int FinalExamResult[ARRAY_LENGTH] = {0};


	for(int x = 0; x < ARRAY_LENGTH; x++){
		cout << "Enter student " << x+1 << " grade ";
		cin >> FinalExamResult[x];
	}
	cout << "\nDesplaying the final exam results... \n\n";
	
	for(int x : FinalExamResult)
		cout << "Student grades are "  << x << endl;

	return 0;
}