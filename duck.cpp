#include "duck.h"

void Duck::PerformFly() {
     flyBehavior->fly();

}

void Duck::PerformQuack() {
     quackbehavior->quack();

}



void Duck::swim() {
    cout << "All Ducks float, even decoys!" << endl;
}

