#include <iostream>
#include <string>
#include <algorithm> // to get the sort function

using namespace std;

class ages { // creating a simple class

	int age;
public:
	void setage() // ask for the persons age
	{
		cin >> age;
	}
	void displayInfo() // output the age to the display
	{
		cout << " has an age of " << age << " years old" << endl;
	}
	bool operator<(ages C) { // overloading the class to select age as the sort type
		return (age < C.age);

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
	sort(arr, arr + 5); // sort from youngest to oldes (ascending)
	for (int i = 0; i < 5; i++) // output the arrray after sorting
	{
		cout << "the youngest person";
		arr[i].displayInfo();
	}
	return 0;
}