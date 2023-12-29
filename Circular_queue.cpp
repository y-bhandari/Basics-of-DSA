//Circular Queue.
//I have planted 1 bug.Solve and correct..

#include<iostream>

#define MAXSIZE 3

using namespace std;

class Queue
{
    private:
    int item,rear,front,ar[MAXSIZE];

    public:
    Queue()
    {
        front=-1;
        rear=-1;
    }

    void enqueue();
    void dequeue();
    void display();
};

void Queue::enqueue()
{
    if (rear==-1)
    {
       rear=0;
       front=0;
       cout<<"Enter item:";
       cin>>item;
       ar[rear]=item; 
    }
    else if(front==(rear+1)%MAXSIZE)
    {
        cout<<"Queue is full."<<endl;
    }
    else
     {
        rear=(rear+1)%MAXSIZE;
        cout<<"Enter item:";
        cin>>item;
        ar[rear]=item;
    }
}

void Queue::dequeue()
{
    if (front==-1)
    {
        cout<<"Queue is empty.";
    }
    else
    {
        item=ar[front];

        if (front==rear)
        {
            front=-1;
            rear=-1;
            cout<<ar[front]<<" just popped.";
        }
        else
        {
            front=(front+1)%MAXSIZE;
            cout<<ar[front]<<" just popped.";
        }
    }
}

void Queue::display()
{
    if (front==-1)
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
        int i=front;
        do
        {
            cout<<ar[i]<<", ";
            i=(i+1)%MAXSIZE;
        } while (i!=(rear+1)%MAXSIZE);
        
    }
}

int main()
{
    Queue q;

    int n;
    
    while(1)
    {
        cout<<endl<<endl<<"Menu"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice:";
        cin>>n;
        switch(n)
        {
            case 1:
            q.enqueue();
            break;

            case 2:
            q.dequeue();
            break;

            case 3:
            q.display();
            break;

            default:
            exit(0);
            break;
        }
    }

 return 0;
}