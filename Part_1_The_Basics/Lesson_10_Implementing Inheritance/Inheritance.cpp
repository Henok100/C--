#include <iostream>
#include <string>
using namespace std;

class Fish
{
public:
	bool isFreshWaterFish;

	void Swim()
	{
		if (isFreshWaterFish)
		{
			cout << "Swims\n";
		}
		else
		{
			cout <<"Can't\n";
		}
	}
};

class tuna: public Fish
{
public:	
	tuna()
	{
		isFreshWaterFish = true;
	}
};

int main(){

	tuna fish1;
	fish1.Swim();
	
	return 0;
}
