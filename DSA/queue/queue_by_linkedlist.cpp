/**
 * Queues - FIFO(First in First out)
 * It is a data structure that support FIFO
 * Linear data structure
 * Insert(Enqueue) from rear and Remove(Dequeue) from Front
 * isFull - queue is full
 * isEmpty - queue is empty
 * Front - Give the element which come first
 * Types -> 1.Simple Queue 2.Priority Queue 3.Circular Queue 4.Double ended Queue/Deque
 * Implementation - 1.By Linked list -> add at tail (enqueue) and remove from tail(dequeue)
 * 2.By Array -> 
 */

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        this->head = NULL;
        this->tail =NULL;
        this->size = 0;
    }

    void enqueue(int data){
        Node* newNode = new Node(data);
        if(this->head ==NULL){
            //ll is empty
            this->head = this->tail = newNode;
        }else{
            this->tail->next = newNode;
            this ->tail = newNode;
        }
        this->size++;
    }

    void dequeue(){
        if(this->head == NULL){
            //ll is empty
            return;
        }else{
            Node* oldhead = this->head;
            Node* newhead = this->head->next;
            this->head = newhead;
            if(this->head == NULL) this->tail = NULL;
            oldhead->next = NULL;
            delete oldhead;
            this->size--;
        }
    }

    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return this->head = NULL;
    }

    int front(){
        if(this->head == NULL) return -1;
        return this->head->data;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);

    while(not qu.isEmpty()) {
        cout<<qu.front()<<" ";
        // qu.dequeue(); //first element is removed (i.e. 20)
    }
    return 0;
}