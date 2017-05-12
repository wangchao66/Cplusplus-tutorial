#include "array.h"
#include <iostream>
using namespace std;

Array::Array(int x):m_iX(x)
{
    m_iX=x;
    m_pY=new int[m_iX];
    for(int i=0;i<m_iX;i++){
        m_pY[i]=i;
    }
}

Array::~Array(){
    //delete []m_pY;
    //m_pY=NULL;
    cout<<"~Array()"<<endl;
}

Array::Array(const Array &arr){

    m_iX=arr.m_iX;
    m_pY=new int[m_iX];
    for(int i=0;i<m_iX;i++){
        m_pY[i]=arr.m_pY[i];
    }
    cout<<"Array(const Array &arr)"<<endl;
}

void Array::setX(int x){
    m_iX=x;
}

int Array::getX(){
    return m_iX;
}

void Array::printAddY(){
    cout<<"m_pY address is:"<<m_pY<<endl;
}
