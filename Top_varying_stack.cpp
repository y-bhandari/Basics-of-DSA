// Top varying stack.

#include<iostream>
using namespace std;
#define MAXSIZE 3

class Stack
{
    private:
    int top,item,ar[MAXSIZE];

    public:
    Stack():top(-1)
    {}

    void push();
    void pop();
    void display();  
};

//Adding data from top of stack...
void Stack::push()
{
    if(top==MAXSIZE-1)
    {
        cout<<"Stack is full."<<endl;
    }
    else
    {
        cout<<"Enter item:";
        cin>>item;
        top++;
        ar[top]=item;
    }
}

//Deleting data from top of stack...
void Stack::pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty.";
    }
    else
    {
        item=ar[top];
        top--;
        cout<<item<<" just popped.";
    }
}

//Displaying data from stack...
void Stack::display()
{
    if(top==-1)
    {
        cout<<"Stack is empty.";
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<ar[i]<<", ";
        }
    }
}

int main()
{
    Stack s;
    int n;
    while(1)
    {
        cout<<endl<<endl<<"Menu"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;

        cout<<"Enter choice:";
        cin>>n;

        switch(n)
        {
            case 1:
            s.push();
            break;

            case 2:
            s.pop();
            break;

            case 3:
            s.display();
            break;

            default:
            exit(0);
            break;
        }
    }
return 0;
}