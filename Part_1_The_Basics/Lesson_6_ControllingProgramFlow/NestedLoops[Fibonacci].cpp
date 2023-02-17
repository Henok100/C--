#include <iostream>
#include <string>
using namespace std;

int main(){

	int numsToCalculate = 2;
	cout << "How much Fibonacci numbers you want to calculate? ";
	cin >> numsToCalculate;
	cout << "This program will calculate " << numsToCalculate \
		 << " Fibonacci numbers at a time." << endl;
	
	int i = 2;	
	int num1 = 0, num2 = 1;

	cout << num1 << " " << num2 << " ";
	
	while(i < numsToCalculate){
		int next = num1 + num2;
		cout << next << " ";
		num1 = num2;
		num2 = next;
		i++;
	}
	cout << endl;

	return 0;
}