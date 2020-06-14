#include <iostream> 
#include <cmath>//use math functions

using namespace std; 

int main () 
{
    cout<< -40 <<endl; //we are able to print out numbers like this
    cout << 30/3 <<endl; //we are able to do math
    cout << 10%3 <<endl; //modulous operator... 10 divided by 3, and then give the remainder

    //able to do PEMDAS
    cout <<(4+5)*10 <<endl;

    //able to store numbers into variables
    int wnum = 5;
    double dnum = 5.0;
    cout <<wnum <<endl;
    wnum++; //incremement by 1;
    cout<< wnum <<endl;
    wnum--; //decrease by 1
    wnum--;
    cout <<wnum<<endl;

    wnum += 80; //be able to add 80
    cout <<wnum<<endl;

    cout <<5.5 +9 <<endl; //we are able to get a decimal back
    cout <<10/3 <<endl; //it will return an interger
    cout <<10.0/3.0 <<endl; //be able to return a decimal back

    //C has a lot of math functions we can use, however we need to import it, which is why "#include <cmath>" is there

    cout<<pow(2,5) <<endl; //2 to the power of 5
    cout<<sqrt(36) <<endl; //square root

    cout<<round (4.3) <<endl; //rounding the number.
    cout <<round (4.6)<<endl;

    cout <<ceil(4.1)<<endl; //rounds up to the next number
    cout <<floor(4.8)<<endl; //rounds down to the next number

    cout <<fmax(3,10) <<endl; //returns the bigger of the two number
    cout <<fmin(3,10) <<endl; //returns the smaller of the two number




    return 0; 
}