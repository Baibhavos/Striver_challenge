#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int counta=0,countb=0;
        
        Node* cura = firstHead;
        Node* curb = secondHead;
        
        while(cura)
        {
            counta++;
            cura = cura->next;
        }
        
        while(curb)
        {
            countb++;
            curb = curb->next;
        }
        
        if(counta>countb)
        {
            int n = counta-countb;
            cura = firstHead;
            curb = secondHead;
            while(n--)
            {
                cura = cura->next;
            }
            
            while(cura and curb)
            {
                if(cura==curb)
                    return cura->data;
                cura = cura->next;
                curb = curb->next;
            }
        }
        else
        {
            int n = countb-counta;
            cura = firstHead;
            curb = secondHead;
            while(n--)
            {
                curb = curb->next;
            }
            
            while(cura and curb)
            {
                if(cura==curb)
                    return cura->data;
                cura = cura->next;
                curb = curb->next;
            }
        }
        return -1;
}
