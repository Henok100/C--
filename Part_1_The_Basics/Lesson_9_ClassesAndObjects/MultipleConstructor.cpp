#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		int age;
		string name;
	
	public:
		Human()
		{
			age = 1;
			cout << "Default Constructor creates nothing\n";
		}
		Human(string Name)
		{
			name = Name;
			cout << "Overloaded constructor creates name: " << name << endl;
		}
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
	Human FirstMan("Henok");
	
	
	return 0;
}
