#include<iostream>
#include<cstring>
using namespace std;

class Node{
    private:
        int age;
        string name;
        Node *link;

    public:
    Node(int a,string Name)
    {
        name=Name;
        age=a;
        link=NULL;
        
    }
    Node()
    {
    }
    ~Node()
    {
    }
    
    void display()
    {
    
        cout<<"Name is:\t"<<name<<"\n";
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