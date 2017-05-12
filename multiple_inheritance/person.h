#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class Person
{
public:
    Person(string strName="jim");
    virtual~Person();
    void play();
public:
    string name;
};

#endif // PERSON_H
