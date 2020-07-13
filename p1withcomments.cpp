#include <iostream>
#include <string>
using namespace std;

class persons{ // creating a simple class
    public:
        void setfirstName(string x){ // created a set method to assign these variables
            firstname = x;
        }
        string getfirstName(){ //created a get method to return the firstname string
            return firstname;
        }
         void setlastName(string y){ // created a set method to assign these variables
            lastname = y;
        }
        string getlastName(){ //created a get method to return the lastname string
            return lastname;
        }
        void setage(int z){ // created a set method to assign these variables
            age = z;
        }
         int getage(){ // created a get method to return the age. it does not print them because a class shouldn't output. 
            return age;// if you want it to output i can add the cout funcion in the class.
        }
    private: // the class has 3 private variables, firstname, lastname and age
        string firstname;
        string lastname;
        int age;
};


int main()
{
    persons personone; // creating the object in the form of the class
    personone.setfirstName("karem"); // setting first name
    personone.setlastName("ramsis"); // setting last name
    personone.setage(777); // setting age
    cout << personone.getfirstName()<<" " <<personone.getlastName()<<" is "<<personone.getage()<<" years old."; // outputing the result to console
    return 0;
}