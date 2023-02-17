#include <iostream>
#include <string>
using namespace std;

const double PI = 3.14;

double Area(double width, double height);
double Area(double radius);

int main(){

	cout << "This program calculates the Area of Circle or Rectangle.\n\n";
	cout << "Enter 'c' for Circle 'r' for Rectangle: ";
	char userSelection = '\0';
	cin >> userSelection;

	if (userSelection == 'c'){
		cout << "Enter the radius of the circle: ";
		double radius = 1;
		cin >> radius;
		cout << "\nThe area is " << Area(radius) << " square meters\n";
	}

	else if(userSelection == 'r'){
		cout << "Enter the width and height of the rectangle: ";
		double width = 1, height = 1;
		cout << "\nWidth: ";
		cin >> width;
		cout << "Height: ";
		cin >> height;
		cout << "\nThe area is " << Area(width, height) << " square meters\n";
	}

	else {
		cout << "Wrong choice Adios!. \n";
	}
	return 0;
}

double Area (double radius){
	return (PI * radius * radius);
}

double Area (double width, double height){
	return (width * height);
}