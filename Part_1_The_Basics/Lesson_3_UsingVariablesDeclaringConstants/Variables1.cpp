#include <iostream>

using namespace std;

int main(){
    
    //int num1, num2, result;
    // or
    int num1;
    int num2;
    int result;

    cout << "This program multiplies two integers." << endl << endl;
    cout << "Please enter first number: ";
    cin >> num1;
    cout << "Please enter second number: ";
    cin >> num2;

    // Multiply the two numbers and store it in result variable
    result = num1 * num2;

    // Dispaly result
    cout << num1 << " x " << num2 << " = " << result <<endl;

    return 0;
}