#include <iostream>

using namespace std;

enum weekdays {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main(){

    cout << "Weekdays and their numeric values" << endl << endl;
    cout << "Monday: " << Monday << endl;
    cout << "Tuesday: " << Tuesday << endl;
    cout << "Wednesday: " << Wednesday << endl;
    cout << "Thursday: " << Thursday << endl;
    cout << "Friday: " << Friday << endl;

    return 0;
}