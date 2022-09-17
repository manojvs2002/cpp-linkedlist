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
    void insertpos(int pos,Node *newnode)
    {
        if(head==NULL)
            {
                head=newnode;
                
                return;
            }
            int i=1;
            Node *temp=head;
            while(  i<pos-1)
            {
                temp=temp->getright();
                i++;
            }
            newnode->getlink(temp->getright());
            temp->getright()->setthelink(newnode);
            newnode->setthelink(temp);
            temp->getthelink(newnode);


    }
    void deletenode()
    {
        Node *temp= head;
            head=head->getright();
            head->leftlink();
            free(temp) ;
    }
    void deleteatend()
    {
        Node *temp1,*temp= head;
        while(temp->getright()!=NULL)
        {
            temp1=temp;
            temp=temp->getright();
        }
        temp1->rightlink();
        free(temp);

    }
    void delepos(int pos)
    {
        int i=1;
            Node *temp1,*temp=head;
            while(i<pos)
            {
                temp1=temp;
                temp=temp->getright();
                i++;
            }
            temp1->getthelink(temp->getright());
            temp->getright()->setthelink(temp1);
            free(temp);

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
     Node *temp1 = new Node(99,"manoj");
    list.insertpos(3,temp1);
    list.display();
   // list.deletenode();
    //list.display();
    //list.deleteatend();
    //list.display();
    //list.delepos(2);
    //list.display();

}