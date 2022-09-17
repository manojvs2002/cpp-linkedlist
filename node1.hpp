#include<iostream>
#include<cstring>
using namespace std;

class Node{
    private:
        
        int age;
        //string name;
        Node *link;

    public:
     Node()
    {
    }
    ~Node()
    {
    }
    void setage(int data)
    {
        age=data;
    }
    int getage()
    {
        return age;
    }
    
    void display()
    {
    
        //cout<<"Name is:\t"<<name<<"\n";
        cout<<"age is: \t"<<age<<"\n";
    }
    
    void setlink(Node *f)
    {
        link = f;
    }
    Node *getlink()
    {
        return link;
    }
    
};