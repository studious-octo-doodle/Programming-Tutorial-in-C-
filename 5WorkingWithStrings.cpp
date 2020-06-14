#include <iostream> //configuration option so we can write our program

using namespace std; //configuration option

int main () //function... container...any lines we put in this container will get executed
{
    string phrase = "Giraffe Academy";
    cout << "hello"; //does not start a new line
    cout << "my name is" << endl; //ends line
    cout << "C++ is fun\n"; //\n will also end a line
    cout <<"See, I am a new line" <<endl;
    cout << phrase << endl;
    cout << phrase.length(); //string function- which is a block of code which can perform a task for us, we have a lot of string function option just put "." after the string
    cout <<phrase[2] <<endl; //Access the third letter (counting starts at 0)
    phrase[0] = 'y'; cout <<phrase << endl; //we are changing the first letter

    //We are also able to get some information from a string
    cout << phrase.find("Academy", 0) <<endl; //input 8 because Academy starts at index 8
    cout << phrase.find("ffe", 0) <<endl;

    cout <<phrase.substr(8, 3) <<endl; //allows you to take a subset of the string, starting index 8, and then grab 3 letters

    string phrasesub;
    phrasesub= phrase.substr(6,4);
    cout<< phrasesub<<endl;

    return 0; //should include... it works without it though, but add it
}