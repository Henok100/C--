#include <iostream>

using namespace std;

int main(){

    unsigned short uShortValue = 65535;
    cout << "unsigned short 65535 + 1 = ";
    cout << ++uShortValue << endl; //returns 0

    short signedShort = 32767;
    cout << "signed short 32767 + 1 = ";
    cout << ++signedShort << endl; //returns -32768

    return 0;
}