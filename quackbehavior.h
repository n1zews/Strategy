#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>

using namespace std;

class QuackBehavior
{
public:
    QuackBehavior();
    virtual void quack() = 0;
};

#endif // QUACKBEHAVIOR_H
