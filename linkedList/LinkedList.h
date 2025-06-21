#pragma once
#include "Node.h"

class LinkedList
{
public:
  LinkedList (const int value);
  ~LinkedList();
  // Member variables
private:
  Node * m_pHead;
  Node *m_pTail;
  unsigned int m_uiLength;

public:
  // Member functions (They all create a new node)
  void append (const int value);
  void prepend (const int value);
  void delete_first();
  bool insert (const int index, const int value);
  Node* get (const unsigned int index);

  // Get list info
  void getHead();
  void getTail();
  void getLength();
  void print_linkedList_values ();
  void delete_last ();

};
