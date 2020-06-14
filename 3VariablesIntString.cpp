#include <iostream> //configuration option so we can write our program

using namespace std; //configuration option

int main () //function... container...any lines we put in this container will get executed
{
    string characterName = "DoofPesto";
    int age;
    age = 24;
    cout << "there was a man named " << characterName << endl; 
    cout << "he was " << age << " years old" << endl; 
    characterName = "ANDREW";
    cout << " He liked his name " << characterName << endl;
    cout << "he did not like his age being " <<age << endl;
    return 0; //should include... it works without it though, but add it
}