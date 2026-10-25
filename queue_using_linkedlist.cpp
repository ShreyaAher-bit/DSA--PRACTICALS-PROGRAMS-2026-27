#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class queue
{
    private:
    node*front;
    node*rear;
    public:
    queue()
    {
        front=NULL;
    }

    int empty()
    {
        if(front==NULL)
        return(1);
        else
        return(0);
    }

    void enqueue(int x)
    {
        node*q=new node(x);
        if(empty())
        {
            front=q;
            rear=q;
        }

        else
        {
            rear->next=q;
            rear=q;
        }
    }

    int dequeue()
    {
        int x=front-> data;
        node*q=front;
        
        front=front->next;
        delete q;
        return (x);
    }

    
    
    int peek()
    {
        return(front->data);
    }

    void display()
    {
        node*q=front;
        while(q!=NULL)
        {
            cout<<"\t"<<q->data;
            q=q->next;
        }
    }
};

int main()
{
    queue q;
    int x;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    x=q.peek();
    cout<<"Front element is:"<<x<<endl;
    x=q.dequeue();
    cout<<"Removed "<<x<<endl;
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    //output:queue underflow

    return 0;
}

//Output
/*PS D:\Shreya Aher> cd "d:\Shreya Aher\" ; if ($?) { g++ queue_using_linkedlist.cpp -o queue_using_linkedlist } ; if ($?) { .\queue_using_linkedlist }
        10      20      30Front element is:10
Removed 10
        20      30
        */