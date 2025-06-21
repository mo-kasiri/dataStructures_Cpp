#include <iostream>
#include "LinkedList.h"
#include "Node.h"

LinkedList::LinkedList (const int value)
{
  Node *newNode = new Node (value, nullptr);	// The first Node
  m_pHead = newNode;
  m_pTail = newNode;
  m_uiLength = 1;
}

LinkedList::~LinkedList ()
{
  Node *nodeTemp = m_pHead;
  while (m_pHead != nullptr)
    {
      m_pHead = m_pHead->m_pNext;
      delete nodeTemp;
      nodeTemp = m_pHead;
    }
}

void
LinkedList::print_linkedList_values ()
{
  Node *tempNode = this->m_pHead;

  while (tempNode != nullptr)
    {
      std::cout << tempNode->m_iValue << "\n";
      tempNode = tempNode->m_pNext;
    }
}

// Manipulating linkedlist

void
LinkedList::append (const int value)
{
  Node *newNode = new Node (value, nullptr);
  if (m_uiLength == 0)
    {
      m_pHead = newNode;
      m_pTail = newNode;
    }
  else
    {
      m_pTail->m_pNext = newNode;
      m_pTail = newNode;
    }
  m_uiLength++;
}

void
LinkedList::prepend (const int value)
{
  if (m_uiLength == 0)
    {
      Node *newNode = new Node (value, m_pHead);
      m_pTail = m_pHead = newNode;
    }
  else
    {
      Node *newNode = new Node (value, m_pHead);
      m_pHead = newNode;
    }

  m_uiLength++;
}

bool
LinkedList::insert (const int index, const int value)
{
  // Todo: 
  return false;
}

void
LinkedList::delete_last ()
{
  if (m_uiLength == 0)
    {
      return;
    }
  else if (m_uiLength == 1)
    {
      m_pHead = m_pTail = nullptr;
      m_uiLength = 0;
    }
  else
    {
      Node *tempNode = m_pHead;
      while (tempNode->m_pNext != m_pTail)
	{
	  tempNode = tempNode->m_pNext;
	}
      m_pTail = tempNode;
      tempNode->m_pNext = nullptr;
      m_uiLength--;
    }
}

void
LinkedList::delete_first ()
{
  if (m_uiLength == 0)
    return;
  Node *tempNode = m_pHead;
  if (m_uiLength == 1)
    {
      m_pHead = m_pTail = nullptr;
    }
  else
    {
      m_pHead = m_pHead->m_pNext;
    }
  delete tempNode;
  m_uiLength--;
}

Node *
LinkedList::get (const unsigned int index)
{
  Node *tempNode = m_pHead;
  if (index >= m_uiLength || index < 0){
    return nullptr;
  }
  if (m_uiLength >= 1)
    {
      unsigned int itterator = 0;
      while (itterator < index)
        {
          itterator++;
          tempNode = tempNode->m_pNext;
        }
      return tempNode;
    }
  return nullptr;
}


//bool LinkedList::insert (const int index, const int value);

// Get list info
void
LinkedList::getHead ()
{
  std::cout << "Head: " << m_pHead->m_iValue << std::endl;
}

void
LinkedList::getTail ()
{
  std::cout << "Tail: " << m_pTail->m_iValue << std::endl;
}

void
LinkedList::getLength ()
{
  std::cout << "Length: " << m_uiLength << std::endl;
}
