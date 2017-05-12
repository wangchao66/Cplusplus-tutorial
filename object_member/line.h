#ifndef LINE_H
#define LINE_H
#include"coordinate.h"
class Line
{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x,int y);
    void setB(int x,int y);
    void printInfor();
private:
    // Coordinate m_coordA;
    // Coordinate m_coordB;

    //object member pointer
    Coordinate *m_coordA;
    Coordinate *m_coordB;
};

#endif // LINE_H
