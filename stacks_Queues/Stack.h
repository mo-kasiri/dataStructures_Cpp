#pragma once
#include <iostream>
#include "Node.h"

class Stack{
private:
    Node* m_pTop;
    unsigned int m_uiSize = 0;

public:
    Stack(const int value);
    ~Stack();

    void print_stack() const;
    void getTop() const;
    void getSize() const;

    // Manipulation methods
    void push(const int value);
    void pop();



};