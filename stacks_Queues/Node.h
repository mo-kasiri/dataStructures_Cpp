#pragma once

class Node
{

public:
  int m_iValue;
  Node *m_pNext;


    Node (int value, Node * next)
  {
    this->m_iValue = value;
    this->m_pNext = next;
  }
};
