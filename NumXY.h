// Definition of class NumXY

#ifndef NEWDELETE_NUMXY_H
#define NEWDELETE_NUMXY_H


class NumXY
{
private:
    int _x;
    int _y;
public:
    NumXY();
    NumXY(const int& x, const int& y);
    void ToString();
    void ToJson();
};


#endif //NEWDELETE_NUMXY_H
