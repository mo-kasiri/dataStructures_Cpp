#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
    m_pRoot = nullptr;
}
BinarySearchTree::~BinarySearchTree() { Clear(m_pRoot); }

bool BinarySearchTree::Insert(int value)
{
    if (m_pRoot == nullptr)
    {
        m_pRoot = new Node(value);
        return true;
    }
    else
    {
        Node *tempNode = m_pRoot;
        // 64
        while (tempNode)
        {
            if (value < tempNode->m_iValue && tempNode->m_pLeft)
            {
                tempNode = tempNode->m_pLeft;
            }
            else if (value > tempNode->m_iValue && tempNode->m_pRight)
            {
                tempNode = tempNode->m_pRight;
            }
            else if (value < tempNode->m_iValue)
            {
                tempNode->m_pLeft = new Node(value);
                tempNode = nullptr;
            }
            else if (value > tempNode->m_iValue)
            {
                tempNode->m_pRight = new Node(value);
                tempNode = nullptr;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}

void BinarySearchTree::PrintTree(Node *node, int space, int indent) const
{
    if (node == nullptr)
        return;

    // Process right child first (so it appears on top when printed)
    PrintTree(node->m_pRight, space + indent, indent);

    // Print current node
    std::cout << std::setw(space) << ' ' << "-- " << node->m_iValue << "\n";

    // Process left child
    PrintTree(node->m_pLeft, space + indent, indent);
}

void BinarySearchTree::Clear(Node *node)
{
    if (node)
    {
        Clear(node->m_pLeft);
        Clear(node->m_pRight);
        delete node;
    }
}