#ifndef PLANE_H
#define PLANE_H
#include "flyable.h"

class Plane:public Flyable
{
public:
    Plane(int code);
    virtual ~Plane();
    virtual void fly();
    virtual void carry();
public:
    int m_iCode;
};

#endif // PLANE_H
