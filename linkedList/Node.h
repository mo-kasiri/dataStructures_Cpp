#pragma once

class Node
{
public:
  Node (int value, Node * next)
  {
    m_iValue = value;
    m_pNext = next;
  }

public:
  int m_iValue;
  Node *m_pNext;
};
