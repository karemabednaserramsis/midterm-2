#include <iostream>
#include <string>
using namespace std;

class persons{ // creating a simple class
    public:
    persons(string a,int c){ // creating a constructor
        setfirstName(a);
        setage(c);
    }
    persons(string a){ // creating a constructor with a default age but given name
        setfirstName(a);
        setage(0);
    }
    persons(int c){
        setfirstName("default"); // creating a constructor with a default name but given age
        setage(c);
    }
    persons(){
        setfirstName("default"); // creating a constructor with a default name and default age
        setage(0); 
    }
        void setfirstName(string x){
            firstname = x;
        }
        string getfirstName(){
            return firstname;
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
    persons personone("kay",555); // testing a complete constructor
    cout << personone.getfirstName()<< " is " <<personone.getage()<<" years old."<<endl;
    persons persontwo("jay"); // testing a partially complete constructor
    cout << persontwo.getfirstName()<< " is " <<persontwo.getage()<<" years old."<<endl;
    persons personthree(777); // testing a partially complete constructor
    cout << personthree.getfirstName()<< " is " <<personthree.getage()<<" years old."<<endl;
    persons persondefault; // testing a default constructor
    cout << persondefault.getfirstName()<< " is " <<persondefault.getage()<<" years old.";
    
    return 0;
}