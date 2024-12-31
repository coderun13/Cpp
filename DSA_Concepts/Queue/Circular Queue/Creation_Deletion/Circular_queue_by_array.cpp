/**
 * Work Flow
 * Queue class
 * Constructor
 * Check condition: is empty(Front , rear = 1), is full(Rear+1%size = front), push function pop function
 * Push function: Condition Check [full(overflow), empty(front = rear = 0 and insert at arr[0]), insert(rear = (rear + 1)size, push at arr[rear]= x)]
 * Pop function: Condition Check [Empty(underflow), pop(front == rear, front == rear = -1)(front = (front+1)%size) ]
 */

#include<iostream>
using namespace std;

class Queue
{
   int *arr;
   int front, rear,size;

   public:

   //constructor
   Queue(int n)
   {
    arr = new int[n];
    size = n;
    front = rear = -1;
   } 

    //Empty condition check
    bool IsEmpty()
    {
        return front == -1; 
    }

    //Full Condition check
    bool IsFull()
    {
        return (rear+1)%size == front;
    }

    //Push Operation
    void push(int x)
    {
        //Empty
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<" Into the Queue \n";
            front = rear = 0;
            arr[0] = x;
            return;
        }
        
        //Full
        else if(IsFull())
        {
            cout<<"Queue Overflow";
            return;
        }

        //Insert
        else
        {
            rear = (rear + 1)%size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" Into the Queue\n";
        }
    }

    void pop()
    {
        //empty
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
        }

        //pop
        else
        {
            
            if(front == rear)
            {
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
                front = rear = -1;
            }
            else
            {
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
                front = (front + 1)%size;
            }
        }
    }

    //start element
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
            return arr[front];
    }
};

int main()
{
    Queue q(5);
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(2);
    q.pop();
    q.push(7);
    q.push(43);
    q.pop();
    cout<<q.start()<<endl;
}