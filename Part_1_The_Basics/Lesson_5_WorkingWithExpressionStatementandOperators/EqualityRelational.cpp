#include <iostream>
#include <string>

using namespace std;

int main(){
 
	cout << "Enter two numbers to compare: ";
	int first, second;
	cin >> first >> second;

	bool isEqual = (first == second);
	cout << "Are they equal? " << "Ans: " << isEqual << endl;

	bool isFirstGreater = (first > second); 
	cout << "Is first greater? " << "Ans: " << isFirstGreater << endl;

	bool isSecondGreater = (second > first); 
	cout << "Is second greater? " << "Ans: " << isSecondGreater << endl;
	

	return 0;
}

