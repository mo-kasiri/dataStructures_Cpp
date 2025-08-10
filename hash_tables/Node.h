#pragma once

#include <iostream>
#include "HashTable.h"
class Node
{
    friend class HashTable;

public:
    Node(const int value, const std::string key, Node *next = nullptr)
    {
        this->m_sKey = key;
        this->m_iValue = value;
        this->m_pNext = next;
    };

private:
    std::string m_sKey;
    int m_iValue;
    Node *m_pNext;
};