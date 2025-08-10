#include "HashTable.h"

void HashTable::printTable()
{
    for (int i = 0; i < this->SIZE; i++)
    {
        std::cout << i << ":" << std::endl;
        if (this->m_pDataMap[i])
        {
            Node *temp = this->m_pDataMap[i];
            while (temp)
            {
                std::cout << " {" << temp->m_sKey << ", " << temp->m_iValue << "}" << std::endl;
                temp = temp->m_pNext;
            }
        }
    }
}