#include <iostream>
#include "Stack.h"

int 
main(){
    Stack* myStack = new Stack(12);
    myStack->push(13);
    myStack->push(15);
    myStack->push(18);
    myStack->push(20);
    myStack->getTop();
    myStack->getSize();
    myStack->print_stack();

    std::cout << "************************\n";
    myStack->pop();
    myStack->pop();
    myStack->getTop();
    myStack->getSize();
    myStack->print_stack();

}