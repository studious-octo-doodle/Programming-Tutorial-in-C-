#include <iostream> 
#include <cmath>//use math functions

using namespace std; 

int main () 
{

    int luckyNums[] = {4, 8, 15, 16, 23, 42}; //4 is the first element, 8 is the next element... etc
    cout << luckyNums[2] <<endl;

    luckyNums[0]=19;
    cout <<luckyNums[0] <<endl;

    int arrayNums[20]; //meaning it has 20 spots
    arrayNums[4]=100;
    cout << arrayNums[4] <<endl;


    return 0; 
}