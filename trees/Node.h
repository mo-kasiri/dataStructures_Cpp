#pragma once

class Node
{
public:
  Node(int value, Node *left = nullptr, Node *right = nullptr)
  {
    m_iValue = value;
    m_pLeft = left;
    m_pRight = right;
  }

  int m_iValue;
  Node *m_pLeft;
  Node *m_pRight;
};
