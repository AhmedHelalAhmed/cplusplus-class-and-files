#include <iostream>
#include "MyHelloClass.h"
#include "MyWorldClass.h"

using namespace std;
/*
The new files act as templates for our new class.
- MyClass.h is the header file.
- MyClass.cpp is the source file.

MyClass ==> separate
my testClass ==> in the same directory

basically, MyClass::MyClass()
refers to the MyClass() member function - or,
in this case, constructor - of the MyClass class.



The header declares "what" a class
(or whatever is being implemented) will do,
while the cpp source file defines "how" it will perform those features.



ifndef stands for "if not defined".
The first pair of statements tells the program
to define the MyClass header file
if it has not been defined already.
endif ends the condition.
This prevents a header file from being included
more than once within one file.




Since myPrint() is a regular member function, it's necessary
to specify its return type in both the declaration and the definition.
*/
int main()
{
    MyHelloClass Hello;
    MyWorldClass world;

    Hello.helloPrint();
    world.worldPrint();



    MyHelloClass *helloptr = &Hello;
    MyWorldClass * worldptr = &world;

    helloptr->helloPrint();
    worldptr->worldPrint();

    // out put
    // Hello World!
    // Hello World!
    return 0;
}
