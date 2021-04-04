#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "quackbehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    MuteQuack();
    virtual void quack();
};

#endif // MUTEQUACK_H
