/**
 * Work Flow
 * Queue class
 * Constructor
 * Check condition: is empty(Front , rear = 1), is full(Rear = size -1), push function pop function
 * Push function: Condition Check [full(overflow), empty(front = rear = 0 and insert at arr[0]), insert(rear = rear + 1, push at arr[rear]= x)]
 * Pop function: Condition Check [Empty(underflow), pop(front == rear, front == rear = -1)(front = front+1) ]
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
        return rear == size - 1;
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
            rear = rear + 1;
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
                front = front + 1;
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
    q.push(7);
    q.pop();
    cout<<q.start()<<endl;
}