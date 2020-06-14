#include <iostream> 
#include <cmath>//use math functions

using namespace std; 

double cube(double num){
    double result = num*num*num;
    return result;
    //return means you are Done... so if you put anything after this, it wont work and wont be executed.
}

int main () 
{
    cout<< cube(5.0)<<endl;
    double answer = cube(2.0);
    cout << "The answer is " << answer<<endl;
 
    return 0; 
}