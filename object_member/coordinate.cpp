#include "coordinate.h"
#include <iostream>
using namespace std;
Coordinate::Coordinate(int x,int y){

    m_ix=x;
    m_iy=y;
    cout<<"Coordinate(int x,int y) "<<m_ix<<","<<m_iy<<endl;
}

Coordinate::~Coordinate(){
    cout<<"~Coordinate()"<<endl;
}
void Coordinate::setX(int x){
    m_ix=x;
}
void Coordinate::setY(int y){
    m_iy=y;

}
int Coordinate::getX(){
    return m_ix;
}
int Coordinate::getY(){
    return m_iy;
}
