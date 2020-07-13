#include <iostream>
#include <string>

using namespace std;

class ages{ // creating a simple class

	int age;
	public:
		void setage() // get the age from the user
		{
			cin >> age;
		}
		void displayInfo() // output function for the class object
		{
			cout << " has an age of " << age << " years old" <<endl;
		}
};

int main()
{
	ages arr[5]; // create a 5 element array
	for (int i = 0; i < 5; i++) // create an array of all the ages
	{
		cout << "enter age for person " << i + 1 << endl;
		arr[i].setage();
	}

	for (int i = 0; i < 5; i++) // output the arrray
	{
		cout << "person "<< i+1;
		arr[i].displayInfo();
	}
	return 0;
}