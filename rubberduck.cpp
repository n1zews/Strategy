#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    quackbehavior = new Squeak();
    flyBehavior = new FlyNoWay();
}


void RubberDuck::display() {
    cout << "I`m a rubber duck" << endl;
}
