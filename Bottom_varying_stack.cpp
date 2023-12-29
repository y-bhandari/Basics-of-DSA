//Bottom varying implementation of stack.

#include<iostream>
#include<conio.h>

#define MAXSIZE 3

using namespace std;

class Stack
{
    private:
    int bos,item,ar[MAXSIZE];

    public:
    Stack():bos(0)
    {}

    void push();
    void pop();
    void display();

};

//Pushing data from bottom of stack...
void Stack::push()
{
    if (bos==MAXSIZE)
    {
    cout<<"Stack is full."<<endl;
    }
    else
    {
        cout<<"Enter item:";
        cin>>item;
       // ar[0]=item;
        for (int i=bos;i>0;i--)
        {
            ar[i]=ar[i-1];
        }
        ar[0]=item;
        bos++;
    }
}

//Popping data from bottom of stack...
void Stack::pop()
{
    if (bos==0)
    {
        cout<<"Stack is empty."<<endl;
    }
    else
    {
        item=ar[0];
        cout<<item<<" just popped."<<endl;

        for (int i=0;i<=bos;i++)
     {
        ar[i]=ar[i+1];
     }
     bos--;
    }
    
}

//Displaying data of stack...
void Stack::display()
{
  if (bos==0)
    {
        cout<<"Stack is empty."<<endl;
    }
    for(int i=0;i<bos;i++)
    {
        cout<<ar[i];
        cout<<", ";
    }
}

int main()
{
    Stack s;

    int n;
    
    while(1)
    {
        cout<<endl<<endl<<"Menu"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;

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
getch();
return 0;
}   
