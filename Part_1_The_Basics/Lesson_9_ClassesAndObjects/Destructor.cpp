#include <iostream>
#include <string>
using namespace std;

class MyBuffer
{
	private:
		int* myNums;
	public:
		MyBuffer(unsigned int length);
		~MyBuffer();
		
};

MyBuffer::MyBuffer(unsigned int length)
{
	cout << "Constructor allocatiog for " << length << " Integers.\n";
	myNums = new int[length];
}

MyBuffer::~MyBuffer()
{
	cout << "Destructor realeasing allocated memory.\n";
	delete[] myNums;
}

int main(){

	cout << "How many integers would you like to store? ";
	int len = 0;
	cin >> len;
	MyBuffer buf(len);	
	
	
	return 0;
}
