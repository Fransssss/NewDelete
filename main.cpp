// Title: Dynamic memory allocation
// Purpose: Dynamically allocate memory and deallocate it when done
// Author: Fransiskus Agapa
// Have fun - Enjoy the process - Practices make improvement

#include <iostream>
#include "NumXY.h"

using std::cout;
using std::endl;

int main()
{
    cout << endl;
    NumXY* numO = new NumXY;                           // allocate memory . call default constructor()
    numO->ToString();                                  // use arrow since its a pointer
    numO->ToJson();
    cout << endl;
    NumXY* numT = new NumXY(100,999);             // allocate memory, call constructor(x,y)
    numT->ToString();                                   // use arrow since its a pointer
    numT->ToJson();

    delete numO;                                       // deallocate memory
    delete numT;                                       // deallocate memory
    return 0;
}