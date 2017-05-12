#include "person.h"
#include<iostream>
using namespace std;
Person::Person(string strName)
{
    name=strName;
    cout<<"Person()"<<endl;

}

Person::~Person(){

}

void Person::play(){
    cout<<"play()"<<endl;
}

