#include<iostream>
#include "doublenode.hpp"
using namespace std;
class Doublelist
{
    private:
    Node *head;


    public:
    Doublelist()
    {}
    ~Doublelist()
    {}
    void insert(Node *f)
    {
        if(head==NULL)
        {
            f->setlink(NULL);
                head=f;
                return;
        }
        Node *temp=head;
        while(temp->getright()!=NULL)
        {
            temp=temp->getright();
        }
            f->setlink(NULL);
            temp->getlink(f);
            

       // return;
    }
    void display()
    {
        Node *temp=head;
        while(temp!=NULL)
            {
                temp->display();
                temp=temp->getright();
            }
    }
    void deletenode()
    {
        Node *temp= head;
            head=head->getright();
            head->leftlink();
            free(temp) ;
    }
};
int main()
{

 int i=0;
    Doublelist list;

    for(i=1;i<=5;i++)
    {
    Node *temp2 = new Node(i,"manoj");
    list.insert(temp2);
    }
   list.display();
   list.deletenode();
   list.display();
}