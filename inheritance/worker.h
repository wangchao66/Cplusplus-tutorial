#ifndef WORKER_H
#define WORKER_H
#include"person.h"

class Worker:public Person
{
public:
    Worker();
    void getSalary();
public:
    int m_iSalary;
};

#endif // WORKER_H
