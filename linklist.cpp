#include<iostream>
#include "node.hpp"
using namespace std;
class Linklist
{
    private:
        Node *node;
    public:
        Linklist()
        {
            
        }
        
        ~Linklist()
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
       void insertatpos(int pos,Node *newnode)
        {
            if(node==NULL)
            {
                node=newnode;
                
                return;
            }
            int i=1;
            Node *temp=node;
            while(temp->getlink()!=NULL && i<pos-1)
            {
                temp=temp->getlink();
                i++;
            }
            newnode->setlink(temp->getlink());
            temp->setlink(newnode);

        }
        void deleteatpos(int pos)
        {
            
            int i=1;
            Node *temp=node;
            while(temp->getlink()!=NULL && i<pos-1)
            {
                temp=temp->getlink();
                i++;
            }
            temp->setlink(temp->getlink()->getlink());
            delete temp->getlink();
            

        }

        void deletenode()
        {
            Node *temp= node;
            node=node->getlink();
            free(temp) ;


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
};
int main()
{
    int i=0;
    Linklist list;

    for(i=1;i<=5;i++)
    {
    Node *temp2 = new Node(i,"manoj");
    list.insert(temp2);
    }
    list.displaynode();

    list.deletenode();
    list.displaynode();
    
    Node *temp1 = new Node(22,"manoj2");
    list.insertatpos(2,temp1);
    list.displaynode();

    list.deleteatpos(5);
    list.displaynode();


    Node *temp5 = new Node(11,"manoj1");
    list.insert(temp5);
    list.displaynode();
}