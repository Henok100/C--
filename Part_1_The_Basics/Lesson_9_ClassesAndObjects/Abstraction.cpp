#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		int age;
	
	public:
		void SetAge(int Age)
		{
			age = Age;
		}

		int GetAge()
		{
			if (age > 30)
				return age - 2;
			else
				return age;
		}
};

int main(){

	Human firstMan;
	firstMan.SetAge(30);

	Human firstWoman;
	firstWoman.SetAge(40);

	cout << firstMan.GetAge() << endl;
	cout << firstWoman.GetAge() << endl;
	

	return 0;
}
