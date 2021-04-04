#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "decoyduck.h"
#include "modelduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new RedHeadDuck();
    d1->display();
    d1->PerformQuack();
    d1->PerformFly();
    cout << "==========" << endl;

   Duck *d2 = new MallardDuck();
   d2->display();
   d2->PerformQuack();
   d2->PerformFly();
   cout << "==========" << endl;

   Duck *d3 = new RubberDuck();
   d3->display();
   d3->PerformQuack();
   d3->PerformFly();
   cout << "==========" << endl;

   Duck *d4 = new DecoyDuck();
   d4->display();
   d4->PerformQuack();
   d4->PerformFly();
   cout << "==========" << endl;

   Duck *d5 = new ModelDuck();
   d5->display();
   d5->PerformQuack();
   d5->PerformFly();
   cout << "==========" << endl;

   return a.exec();
}
