#include <iostream> //configuration option so we can write our program

using namespace std; //configuration option

int main () //function... container...any lines we put in this container will get executed
{
    char grade = 'A'; //character data type
    string phrase = "Academy"; //be able to store a string of characters... or a 'string' or text
    
    //two different main numbers... decimals and whole numbers
    int age = 50; //no need quotation numbers... we can also use negatives, BUT do not add a decimal...50.0 would be incorrect with int
    double gpa = 2.3; //double can hold more decimal points then float
    bool isMale = false; //boolean is for true or false statements

    cout << grade<< endl; 

    return 0; //should include... it works without it though, but add it
}