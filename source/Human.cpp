#include "../header/Human.h"

Human::Human(int x, int y, int distance = 1):GameObject(x, y, distance){}

void Human::move(){
    char key;
    std::cin >> key;

    switch (key)
    {
    case 'a':
        x -= 2;
        break;

    case 's':
        x += 2;
        break;

    case 'd':
        y -= 1;
        break;

    case 'f':
        y += 1;
        break;
    
    default:
        break;
    }
}