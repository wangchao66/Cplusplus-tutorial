#ifndef FIGHT_PLANE_H
#define FIGHT_PLANE_H

#include "plane.h"

class Fight_plane :public Plane
{
public:
    Fight_plane(int code);
    virtual ~Fight_plane();
    virtual void fly();
    virtual void fight();


};

#endif // FIGHT_PLANE_H
