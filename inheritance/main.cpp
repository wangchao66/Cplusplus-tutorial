/**********************************************
 a inheritance function demo
 author:wangchao
 date:2016.5.6
 **********************************************/
#include <iostream>
#include <worker.h>
using namespace std;

int main()
{
    Worker *p=new Worker;
    p->eat();
    p->getSalary();
    p->m_iAge=10;
    p->m_iSalary=1000;
    p->m_strName="jim";
    delete p;
    p=NULL;
    return 0;
}

