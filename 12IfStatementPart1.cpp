#include <iostream> 
#include <cmath>

using namespace std; 


int main () 
{

    bool isMale = false;
    bool isTall = false;
  /*  
    if(isMale && isTall){ //and operator
        cout << "You are a tall male."<<endl;
    }
    else
    {
        cout << "You are a female.";
    }*/
  /*  
    if(isMale || isTall){ //OR operator
        cout << "You are a tall male."<<endl;
    }
    else
    {
        cout << "You are a female.";
    }*/

//else if
    if(isMale && isTall){ //OR operator
        cout << "You are a tall male."<<endl;
    } else if(isMale && !isTall) {//! means negative of it
        cout << "You are a short male";
    }
    else if(!isMale && isTall){
        cout << "You are a tall but not male";
    }
    else
    {
        cout << "You are not tall and male.";
    }

    return 0; 
}