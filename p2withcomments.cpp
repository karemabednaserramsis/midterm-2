#include <iostream>
#include <string>
using namespace std;

class persons{ // creating a simple class
    public:
    persons(string a,string b,int c){ // creating a constructor
        setfirstName(a);
        setlastName(b);
        setage(c);
    }
	// all the same as p1
        void setfirstName(string x){
            firstname = x;
        }
        string getfirstName(){
            return firstname;
        }
         void setlastName(string y){
            lastname = y;
        }
        string getlastName(){
            return lastname;
        }
        void setage(int z){
            age = z;
        }
         int getage(){
            return age;
        }
    private:
        string firstname;
        string lastname;
        int age;
};


int main()
{
    persons personone("kay","ray",55); // testing it using a object and the constructor
    cout << personone.getfirstName()<<" " <<personone.getlastName()<<" is "<<personone.getage()<<" years old."; // output of the object
    return 0;
}