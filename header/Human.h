#ifndef _HUMAN_
#define _HUMAN_

#include <iostream>
#include "GameObject.h"

class Human : public GameObject
{
    int distance; // 한 번 이동 거리
public:
    Human(int x, int y, int distance = 1);
    virtual ~Human() {}
    virtual void move();
    virtual char getShape() { return 'H'; }
};

#endif