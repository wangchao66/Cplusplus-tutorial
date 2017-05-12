#include "line.h"
#include"coordinate.h"
#include<iostream>
using namespace std;

//Line::Line(int x1,int y1,int x2,int y2):m_coordA(x1,y1),m_coordB(x2,y2){
//    cout<<"Line(int x1,int y1,int x2,int y2)"<<endl;
//}

//object member pointer
Line::Line(int x1, int y1, int x2, int y2){
    m_coordA=new Coordinate(x1,y1);
    m_coordB=new Coordinate(x2,y2);
}

Line:: ~Line(){
    cout<<"~Line()"<<endl;
}

void Line::setA(int x,int y){
   m_coordA->m_ix=x;
   (*m_coordA).m_iy=y;
}

void Line::setB(int x, int y){
    (*m_coordB).m_ix=x;
    (*m_coordB).m_iy=y;
}

void Line::printInfor(){

    cout<<"("<<m_coordA->getX()<<","<<m_coordA->getY()<<")"<<endl;
    cout<<"("<<m_coordB->getX()<<","<<m_coordB->getY()<<")"<<endl;
}
