#include "Stack.h"

Stack::Stack(const int value) {
    Node* newNode = new Node(value, nullptr);
    m_pTop = newNode;
    m_uiSize = 1;
}

Stack::~Stack()
{
    Node* temp = m_pTop;
    while(temp){
        pop();
        temp=temp->m_pNext;
    }
    delete temp;
}

void Stack::print_stack() const {
    Node* temp = m_pTop;
    while (temp != nullptr) {
        std::cout << temp->m_iValue << std::endl;
        temp = temp->m_pNext;
    }
}

void Stack::getTop() const
{
    std::cout << "Top value: " << m_pTop->m_iValue << std::endl;
}

void Stack::getSize() const
{
    std::cout << "Stack size: " << m_uiSize << std::endl;
}

void Stack::push(const int value){
    Node* newNode = new Node(value, m_pTop);
    m_pTop = newNode;
    m_uiSize++;
}

void Stack::pop(){
    Node* tempNode = m_pTop;
    m_pTop = m_pTop->m_pNext;
    delete tempNode;
    m_uiSize--;
}
