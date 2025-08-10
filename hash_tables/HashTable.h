#pragma once

#include <iostream>
#include "Node.h"

class HashTable
{
    static const int SIZE = 7;
    Node *m_pDataMap[SIZE];

public:
    void printTable();
};