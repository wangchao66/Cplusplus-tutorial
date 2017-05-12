#ifndef ARRAY_H
#define ARRAY_H

class Array
{
public:
    Array(int x=3);
    ~Array();
    Array(const Array &arr);
    void setX(int x);
    int getX();
    void printAddY();
public:
    int m_iX;
    int *m_pY;
};

#endif // ARRAY_H
