#include<iostream>
#include "node1.hpp"
using namespace std;
class Linklist
{
    private:
        Node *node;
    public:
        Linklist()
        {
            ///node=NULL;
        }
        
        ~Linklist()
        {

        }
        
        
        void swap(Node *p1,Node *p2)
        {
            if(p1==node){
                node=p2;
            }
            p1->setlink(p2->getlink());
            p2->setlink(p1);
            
        }
        int compare(Node *p1)
        {
            if(p1->getlink()==NULL)
            return 0;
            Node *p2=p1->getlink();

            if(p1->getage()>p2->getage())
            {
                return 1;
            } else 
                return 0;
        }
        void bubblesort()

        {
                Node *i=node,*j;
                for(int z=0;z<6;z++)
                {
                    for(j=node;j!=NULL;)
                    {
                     if(compare(j)==1)
                        swap(j,j->getlink());   
                     else
                        j=j->getlink();
                    }
                    cout<<"Loop "<<z<<"\n";
                    displaynode();
                }
        }
        void insert(int data)
        {
            
            Node *temp1=new Node();
            temp1->setage(data);
            temp1->setlink(NULL);
            if(node==NULL)
            {
                
                node=temp1;
                return;
            }
            
           
            Node *temp = node;
            while(temp->getlink()!=NULL)
            {
                temp=temp->getlink();
            }
             
            temp->setlink(temp1);
           // temp=temp->getlink();//
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
    Linklist list;

    int a[]={27,5,2,1,6,23};
    int n,i;
    n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
    {
       list.insert(a[i]);
    }
    list.displaynode();
    list.bubblesort();
    list.displaynode();

}