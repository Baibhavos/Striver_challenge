#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* nhead = new Node<int>(0);
    Node<int>* head = nhead;
    
    while(first && second)
    {
        if(first->data < second->data)
        {
            head->next = first;            
            first = first->next;
        }
        else
        {
            head->next = second;
            second = second->next;
        }
        head = head->next;
    }
    
    if(first)
    {
        head->next = first;
        first = first->next;
    }
    
    if(second)
    {
        head->next = second;
        second = second->next;
    }
    return nhead->next;
}
