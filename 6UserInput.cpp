#include <iostream> 
#include <cmath>//use math functions

using namespace std; 

int main () 
{
    //allow users yo input string
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name;

    //allow user to input  INT
    int age; //declare it, so user can give it's value
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " Years old" <<endl;

    //allow users to input Char (a letter)
    char charAge; 
    cout << "Enter your char age: ";
    cin >> charAge;
    cout << "You are " << charAge << " Char Years old" <<endl;

 
    return 0; 
}