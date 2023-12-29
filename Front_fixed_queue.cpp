//Front fixed Queue.

#include<iostream>

#define MAXSIZE 3

using namespace std;

class Queue
{
    private:
    int front,rear,item,ar[MAXSIZE];

    public:
    Queue()
    {
        front=0;
        rear=-1;
    }

    void enqueue();
    void dequeue();
    void display();
};

//Adding data from rear end of queue...
void Queue::enqueue()
{
    if (rear==MAXSIZE-1)
    {
        cout<<"Queue is full.";
    }
    else
    {
        rear++;
        cout<<"Enter item:";
        cin>>item;
        ar[rear]=item;
    }
}

//Removing data from fixed front end of queue...
void Queue::dequeue()
{
    if (rear==-1)
    {
        cout<<"Queue is empty.";
    }
    else
    {
        item=ar[front];
        cout<<item<<" just popped.";

        for(int i=0;i<rear;i++)
        {
            ar[i]=ar[i+1];
        }
        rear--;
    }
}

//displaying data from queue...
void Queue::display()
{
  if (rear==-1)
    {
        cout<<"Queue is empty."<<endl;
    }
    else
    {
     for(int i=front;i<=rear;i++)
        {
         cout<<ar[i];
         cout<<", ";
        }
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