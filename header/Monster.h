
#include "GameObject.h"

class Monster : public GameObject
{
public:
    Monster(int x, int y, int distance = 1);
    virtual ~Monster() {}
    virtual void move();
    virtual char getShape() { return 'M'; }
};
