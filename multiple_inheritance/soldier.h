#ifndef SOLDIER_H
#define SOLDIER_H
#include "person.h"
#include <string>
class Soldier:public Person
{
public:
    //when person() include string name ,soldier() and infrantry()must do it
    Soldier(string strName="jack",int iAge=10);
    virtual ~Soldier();
    void work();
public:
    int age;
};

#endif // SOLDIER_H
