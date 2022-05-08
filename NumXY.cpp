// Declare class NumXY

#include "NumXY.h"
#include <iostream>
using std::cout;
using std::endl;

NumXY::NumXY()
{
    _x = 0;
    _y = 0;
}

NumXY::NumXY(const int &x, const int &y)
{
    _x = x;
    _y = y;
}

void NumXY::ToString()
{
    cout << " -- String Format --" << endl;
    cout << "X = " << _x << ", Y = " << _y << endl;
}

void NumXY::ToJson()
{
    cout << " -- Json Format -- " << endl;
    cout << "[{ \"X\" : " << _x << ", \"Y\" : " << _y << " }]" << endl;
}
