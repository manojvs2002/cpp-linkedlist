#include <iostream>
#include "node1.hpp"
using namespace std;
class Linklist
{
private:
    Node *node;

public:
    Linklist()
    {
        /// node=NULL;
    }

    ~Linklist()
    {
    }
    int getcount()
    {
        int count = 0;

        Node *temp = node;

        while (temp->getlink() != NULL)
        {
            count++;
            temp = temp->getlink();
        }
        count++;
        //cout << "no of ele\t" << count<<"\n";
        return count;
    }
    int getmid()
    {
        int midpoint;
        midpoint=getcount()/2;
        
        //cout<<"mid is\t"<< key<<"\n";
        return midpoint;
    }
    Node *search(Node *p1,int key)
    {
        Node *first=node;
        Node *temp=first;
        while(temp->getlink()!=NULL)
        {
            temp=temp->getlink();
        }
        Node *last=temp;
        p1=node;
        Node *p2;
        while (p1->getage()!=getmid())
        {
            p2=p1;
            p1=p1->getlink();
        }
        
        if(key==getmid())
        {
            return p1;
        }
        else 
        if(key>getmid())
        {
            first=p1->getlink();
        }
        else
        if(key<getmid())
        {
            last=p2;
        }

         //cout<<"key is\t"<<key;
    
    }
    void print()
    {
        Node *temp;
        int n;
        cout<<"enetr the ele\n";
        cin>>n;
        search(temp,n);
        cout<<"ele searched is\t"<<n<<"at position\t"<<temp;
        
    }
    void insert(int data)
    {

        Node *temp1 = new Node();
        temp1->setage(data);
        temp1->setlink(NULL);
        if (node == NULL)
        {

            node = temp1;
            return;
        }

        Node *temp = node;
        while (temp->getlink() != NULL)
        {
            temp = temp->getlink();
        }

        temp->setlink(temp1);
        // temp=temp->getlink();//
    }
    void displaynode()
    {
        Node *temp = node;

        while (temp != NULL)
        {
            temp->display();
            temp = temp->getlink();
        }
    }
};
int main()
{
    Linklist list;
    int i;
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    for (i = 0; i < n; i++)
    {
        list.insert(a[i]);
    }
    list.displaynode();
    //list.getcount();
    //list.getmid();
    list.print();
}