#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate
{
public:
    Coordinate(int x,int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
public:
    int m_ix;
    int m_iy;
};

#endif // COORDINATE_H
