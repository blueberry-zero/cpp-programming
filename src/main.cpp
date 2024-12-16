#include <iostream>

using namespace std;

enum taste {
    GOOD,
    GREAT
};

struct myThing {
    string name;
    int val;
    taste rating;
};

int main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;

    cout << fullName << "\n";

    cout << firstName.append(lastName) << "\n";

    myThing thing1;

    thing1.name = "berry";
    thing1.val = 100;
    thing1.rating = GREAT;

    cout << "Value of GOOD: " << GOOD << "\n";
    cout << "Value of GREAT: " << GREAT << "\n";

    // pointer to same var
    string &name = firstName;
    // name = "John Doe"
    // &name := ref for the var that is JohnDow

    // the pointer of our pointer
    string* name2 = &name;
    // name2 := the ref for the var name
    
    // assigns value of the firstName memAddr
    string* name3 = &firstName; 
    // name3 := pointer to the value for first name
    
    // &<var> := get the memory address of this var
    // <type>* := this is a memory address to a var of this type

    cout << name << "\n";
    cout << &name << "\n";
    cout << name2 << "\n";
    cout << name3 << "\n";

    // derefence
    
    string food = "pizza";
    string* ptr = &food;

    cout << "Val of food: " << food << "\n";
    cout << "Val of ptr: " << ptr << "\n";
    cout << "Val of *ptr: " << *ptr << "\n";

    // change val at pointer

    *ptr = "Hamburger";

    cout << "Update val of *ptr: " << *ptr << "\n";
    cout << "Val of food: " << food << "\n";

    return 0;
}


