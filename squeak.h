#ifndef SQUEAK_H
#define SQUEAK_H

#include "quackbehavior.h"

class Squeak : public QuackBehavior
{
public:
    Squeak();
    virtual void quack();
};

#endif // SQUEAK_H
