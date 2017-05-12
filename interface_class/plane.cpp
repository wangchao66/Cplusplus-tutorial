#include "plane.h"
#include <iostream>
using namespace std;

Plane::Plane(int code)
{
    m_iCode=code;
}

Plane::~Plane(){
    cout<<"~plane()"<<endl;
}

void Plane::fly(){
    cout<<"plane::fly()"<<endl;
}

void Plane::carry(){
    cout<<"carry()"<<endl;
}
