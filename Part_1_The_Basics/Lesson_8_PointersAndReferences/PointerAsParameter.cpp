#include <iostream>
#include <string>
using namespace std;

void Area(const double* const ptrPI,
		  const double* const ptrRadius,
		  double* const ptrArea)
{
	if (ptrPI && ptrRadius && ptrArea)
		*ptrArea = (*ptrPI) * (*ptrRadius) * (*ptrRadius);
}

int main(){

	const double PI = 3.1415;
	const double radius = 5.6;

	double area = 1;

	Area(&PI, &radius, &area); 

	cout << "\n Area = " << area << endl;

	return 0;
}