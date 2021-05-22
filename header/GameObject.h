#ifndef _GAMEOBJECT_
#define _GAMEOBJECT_

#include <random>

class GameObject
{ // 추상 클래스
protected:
    int distance; // 한 번 이동 거리
    int x, y;     // 현재 위치
public:
    GameObject(int startX, int startY, int distance)
    { // 초기 위치와 이동 거리 설정
        this->x = startX;
        this->y = startY;
        this->distance = distance;
    }
    virtual ~GameObject(){};     // 가상 소멸자
    virtual void move() = 0;     // 이동한 후의 새로운 위치로 x, y 변경
    virtual char getShape() = 0; // 객체의 모양을 나타내는 문자 리턴

    int getX() { return x; }
    int getY() { return y; }
    bool collide(GameObject *p)
    { // 이 객체가 객체 p와 충돌했으면 true 리턴
        if (this->x == p->getX() && this->y == p->getY())
            return true;
        else
            return false;
    }
};

#endif