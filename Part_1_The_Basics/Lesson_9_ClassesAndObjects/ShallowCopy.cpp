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
	cout << "Destructor releasing allocated memory.\n";
	delete[] myNums;
}

void useMyBuf(MyBuffer buff){
	cout << "Copy of buf\n";
}

int main(){

	cout << "How many integers would you like to store? ";
	int len = 0;
	cin >> len;
	MyBuffer buf(len);	
	
	useMyBuf(buf);
	
	return 0;
}
