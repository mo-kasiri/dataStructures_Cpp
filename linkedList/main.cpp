#include <iostream>
#include "LinkedList.h"

int
main ()
{
  LinkedList *myLinkedList = new LinkedList (4);
  myLinkedList->append (7);
  myLinkedList->append (71);
  myLinkedList->append (2);
  myLinkedList->append (23);
  myLinkedList->append (721);


  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();


  std::cout << "**************************** \n";
  myLinkedList->delete_last ();
  myLinkedList->delete_last ();
  myLinkedList->delete_last ();
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** \n";
  myLinkedList->prepend (123321);
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** \n";
  myLinkedList->delete_first ();
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** \n";
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  const Node *newNode = myLinkedList->get (2);
  if (newNode)
    {
      std::cout << "The returned value for index 3 is " << newNode->
	m_iValue << std::endl;
    }
  else
    {
      std::cout << "The index is invalid \n";
    }
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** inserting \n";
  myLinkedList->insert (2, 999);
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();


  std::cout << "**************************** setting \n";
  myLinkedList->set (0, 888);
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** removing \n";
  myLinkedList->remove(2);
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();

  std::cout << "**************************** reversing \n";
  myLinkedList->reverse ();
  myLinkedList->getHead ();
  myLinkedList->getTail ();
  myLinkedList->getLength ();
  myLinkedList->print_linkedList_values ();



  return 0;
}
