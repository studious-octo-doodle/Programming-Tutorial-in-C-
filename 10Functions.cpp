#include <iostream> 
#include <cmath>//use math functions

using namespace std; 

void sayHi();
void sayHiName(string name, int age);

//if we want that code to be excuted, then we have to call it in the main function
int main () 
{
    cout<< "Top" <<endl;
    sayHi();
    cout<< "Bottom"<<endl;

    sayHiName("Drump", 97);
    sayHiName("Doof", 2);
    sayHiName("Foof", 23);


    return 0; 
}

void sayHi(){
    cout << "Hello User"<<endl;
}//void means it wont return a thing

void sayHiName(string name, int age){
    cout << "Hello " <<name << ", you are " <<age <<endl;
}
