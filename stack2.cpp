#include<iostream>
#include "node.hpp"
using namespace std;
class Stack
{
    private:
        Node *node;
    public:
        Stack()
        {
            ///node=NULL;
        }
        
        ~Stack()
        {

        }
    
        void insert(Node *newnode)
        {
            if(node==NULL)
            {
                newnode->setlink(NULL);
                node=newnode;
                return;
            }

            Node *temp = node;
            while(temp->getlink()!=NULL)
            {
                temp=temp->getlink();

            }
            newnode->setlink(NULL);
            temp->setlink(newnode);
        }
        void displaynode()
        {
            Node *temp = node;
            
            while(temp!=NULL)
            {
                temp->display();
                temp=temp->getlink();
            }
        }
        
            void deletenode()
        {
            Node *temp= node;
            Node *temp1;
            if(node->getlink()==NULL)
            {
                node=NULL;
                free(node);
            }
            else
            {
                while(temp->getlink()!=NULL)
                {
                    temp1=temp;
                    temp=temp->getlink();
                }
               // temp1->getlink()=NULL;
                free(temp);
            }
           


        }
        
};
int main()
{
    int i;
    Stack list;

    for(i=1;i<=5;i++)
    {
    Node *temp2 = new Node(i,"manoj");
    list.insert(temp2);
    }
    list.displaynode();
    list.deletenode();
    list.displaynode();

}