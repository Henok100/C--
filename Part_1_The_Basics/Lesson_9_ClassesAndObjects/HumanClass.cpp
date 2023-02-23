#include <iostream>
#include <string>
using namespace std;

class Human
{
	public:
		string name;
		int age;
	
		void IntroduceSelf()
		{
			cout << "I am " << name << " and am ";
			cout << age << " years old.\n";
		}
		
};

int main(){

	Human firstMan;
	firstMan.name = "Tenaw";
	firstMan.age = 27;

	Human firstWoman;
	firstWoman.name = "Shegitu";
	firstWoman.age = 45;

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();

	return 0;
}
