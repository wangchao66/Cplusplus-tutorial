#ifndef INFRANTRY_H
#define INFRANTRY_H
#include "soldier.h"

class Infrantry:public Soldier
{
public:
    Infrantry(string strName,int iAge);
    virtual ~Infrantry();
    void attack();
};

#endif // INFRANTRY_H
