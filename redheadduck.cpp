#include "redheadduck.h"

RedHeadDuck::RedHeadDuck()
{
    quackbehavior = new Quack();
    flyBehavior = new FlyWithWings();
}

void RedHeadDuck::display() {
    cout << "I`m a headrad duck" << endl;
}
