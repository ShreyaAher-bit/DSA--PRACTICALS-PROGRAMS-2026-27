#include<iostream>
using namespace std;

#define MAX 5
class queue
{
    private:
    int a[MAX];
    int front;
    int rear;

    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    
    int empty()
    {
        if(front==-1 && rear==-1)
        return(1);
        else
        return(0);
    }

    int full()
    {
        if(rear==MAX-1)
        return(1);
        else
        return(0);
    }

    void enqueue(int x)
    {
        if(front==-1 && rear==-1)
        {
            front ++;
            rear ++;
        }
        else
        {
         rear++;
        }
    
        a[rear]=x;
    }

        int dequeue()
        {
            int x=a[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front++;
            }
            return (x);
        }
        int peek()
        {
            return(a[front]);
        }
        
    
   
 void display(void)
 {
  for(int i=front;i<=rear;i++)
    cout<<"\t"<<a[i];
    }
};

int main()
{
    //enqueue operations
    queue q;
    if(!q.full())
    q.enqueue(10);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

    if(!q.full())
    q.enqueue(20);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

   
    if(!q.full())
    q.enqueue(30);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

    if(!q.full())
    q.enqueue(40);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

    if(!q.full())
    q.enqueue(50);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

    if(!q.full())
    q.enqueue(60);
    else
    {
        cout<<"queue is full"<<endl;
    }
    cout<<"queue contents after enqueue operation: "<<endl;
    q.display();

    //dequeue operations
    for(int i=0;i<6;i++)
    {
        if(q.empty())
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"dequeued element is "<<q.dequeue()<<endl;
            
        }
        cout<<"queue contents after dequeue operation: "<<endl;

        if(!q.empty())
        q.display();
        else
        cout<<"queue is empty"<<endl;
    }
    return 0;
}

//output
/*PS D:\Shreya Aher> cd "d:\Shreya Aher\" ; if ($?) { g++ queueusingarray.cpp -o queueusingarray } ; if ($?) { .\queueusingarray }
queue contents after enqueue operation: 
        10queue contents after enqueue operation: 
        10      20queue contents after enqueue operation: 
        10      20      30queue contents after enqueue operation: 
        10      20      30      40queue contents after enqueue operation: 
        10      20      30      40      50queue is full
queue contents after enqueue operation: 
        10      20      30      40      50dequeued element is 10
queue contents after dequeue operation: 
        20      30      40      50dequeued element is 20
queue contents after dequeue operation: 
        30      40      50dequeued element is 30
queue contents after dequeue operation: 
        40      50dequeued element is 40
queue contents after dequeue operation: 
        50dequeued element is 50
queue contents after dequeue operation: 
queue is empty
queue is empty
queue contents after dequeue operation: 
queue is empty0 */