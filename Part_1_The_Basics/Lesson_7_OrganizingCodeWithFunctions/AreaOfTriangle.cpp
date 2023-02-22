#include <iostream>
#include <string>
using namespace std;

int Area(int base, int height = 45);

int main(){

	cout << "This program calculates the area of a Right-Angle triangle.\n\n";
	cout << "Please enter height and base of the traingle: ";
	int base = 0, height = 0;
	cout << "\nBase = "; cin >> base;
	cout << "Height = "; cin >> height;

	cout << "The Area is " << Area(base, height) << endl;

	return 0;
}

int Area (int base, int height){
	return (base*height)/2;
}