#ifndef DUCK_H
#define DUCK_H

#include "quackbehavior.h"
#include "flybehavior.h"
#include "quack.h"
#include "flywithwings.h"
#include "mutequack.h"
#include "flynoway.h"
#include "squeak.h"
#include "flyrocketpowered.h"

class Duck {
public:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackbehavior;


    void PerformFly();
    void PerformQuack();
    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
