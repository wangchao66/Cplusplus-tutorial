#include "soldier.h"
#include <iostream>
#include <string>
using namespace std;

Soldier::Soldier(string strName,int iAge)
{
    name=strName;
    age=iAge;
    cout<<"soldier()"<<endl;
}

Soldier::~Soldier(){

}

void Soldier::work(){
    cout<<"work()"<<endl;
}
