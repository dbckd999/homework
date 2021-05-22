#include "GameObject.h"

class Food : public GameObject
{
public:
    Food(int x, int y, int distance = 1);
    virtual ~Food() {}
    virtual void move();
    virtual char getShape() { return '@'; }
};
