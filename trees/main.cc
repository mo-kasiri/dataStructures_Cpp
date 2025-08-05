#include <iostream>
#include "BinarySearchTree.h"
int main()
{

    BinarySearchTree *BST1 = new BinarySearchTree();

    /*************
         47
        /  \
       21   76
      / \   / \
     18 27 52 82

    ***************/

    BST1->Insert(47);
    BST1->Insert(21);
    BST1->Insert(27);
    BST1->Insert(76);
    BST1->Insert(18);
    BST1->Insert(52);
    BST1->Insert(82);
    BST1->Insert(64);

    std::cout << "Visual Tree Structure:\n";
    BST1->PrintTree(BST1->m_pRoot);

    return 0;
}