#include <iostream>

using namespace std;

void MultiplyNumbers(){

    int num1;
    int num2;
    int result;

    cout << "This program multiplies two integers." << endl << endl;
    cout << "Please enter first number: ";
    cin >> num1; //not known
    cout << "Please enter second number: ";
    cin >> num2; // not known

    // Multiply the two numbers and store it in result variable
    result = num1 * num2; // not known

    // Dispaly result
    cout << num1 << " x " << num2 << " = " << result <<endl;
}

int main(){
    
    MultiplyNumbers();

    return 0;
}