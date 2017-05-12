#include "infrantry.h"
#include <iostream>
#include <string>
using namespace std;
Infrantry::Infrantry(string strName,int iAge)
{
    name=strName;
    age=iAge;
    cout<<"Infrantry()"<<endl;
}

Infrantry::~Infrantry(){

}

void Infrantry::attack(){
    cout<<"attack()"<<endl;
}
