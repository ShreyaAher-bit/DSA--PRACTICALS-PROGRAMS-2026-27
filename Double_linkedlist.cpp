#include<iostream>
using namespace std;

class node
{
public:
int data;
node*next;
node*prev;
node(int x)
{
    data=x;
    next= NULL;
    prev=NULL;
}
};

class linkedlist
{
    private:
    node*head;

    public:
    //constructor for list
    linkedlist()
    {
        head=NULL;
    }
    void insert(int x)
    {
        node*p=new node(x);
        if(head==NULL)
        {
            head=p;
        }
        else{
            node*q=head;
            while(q->next !=NULL)
            q=q->next;
            q->next=p;
            p->prev=q;
        }
    }

    void display(void)
    {
        node*q;
        q=head;
        while(q!=NULL)
        {
            cout<<q->data<<"<=>";
            q=q->next;
        }
    }

    void remove(int x)
    {
        node*p=NULL;

        if(head->data==x)
        {
            p=head;
            head=head->next;
            head->prev=NULL;
            delete p;
            return;
        }

        node*q=head;
        while(q->next !=NULL)
        {
            if(q->next->data==x)
            {
                p=q->next;
                q->next=p->next;
                p->next->prev=q;
                delete p;
                return;
            }
            q=q->next;
        }
        cout<<"Data not found in list";
    }

};

int main()
{
    linkedlist list;
    cout<<"List after inserting node:";
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.display();
    cout<<endl;
cout<<"List after removing one node:";
    list.remove(30);
    
    list.display();
    return(0);
    
}

//output
/*PS D:\Shreya Aher> cd "d:\Shreya Aher\" ; if ($?) { g++ double_linkedlist.cpp -o double_linkedlist } ; if ($?) { .\double_linkedlist }
List after inserting node:10<=>20<=>30<=>40<=>
List after removing one node:10<=>20<=>40<=>*/