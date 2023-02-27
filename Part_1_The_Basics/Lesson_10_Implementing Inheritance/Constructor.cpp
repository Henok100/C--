#include <iostream>
#include <string>

using namespace std;

class Student
{
	protected:
		bool Elecstudent;
	public:
		Student(bool Elec): Elecstudent(Elec){}

		void Enter()
		{
			if (Elecstudent)
			{
				cout << "You can enter.\n";
			}
			else
			{
				cout << "Wrong class\n";
			}
		}
};

class Mech: public Student
{
	public:
		Mech():Student(false){}
};

class Elec: public Student
{
	public:
		Elec():Student(true){}
};

int main()
{
	Mech mech1;
	Elec elec1;

	cout << "Mech1: "; mech1.Enter();
	cout << "Elec1: "; elec1.Enter();

	return 0;
}