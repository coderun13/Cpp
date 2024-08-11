/**
 * Stack implementation using linkedlist -> push-> insertAtHead and pop-> removefromHead
 * overflow condition -> stack is full then elements are added.
 * underflow condition-> stack is empty then element is removed.
 */

# include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this-> data= d;
        this -> next= NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currsize;

    public:
    Stack(int c){
        this->capacity = c;
        this->capacity = 0;
        head = NULL;
    }
    bool isEmpty(){
        return this -> head == NULL;
    }
    bool isFull(){
        return this-> currsize == this -> capacity;
    }
    void push(int data){
        if(this-> currsize == this -> capacity){
            cout<<"overflow";
            return;
        }
        Node* new_node = new Node(data);
        new_node -> next = this -> head;
        this->head = new_node;
        this-> currsize++;
    }

    int pop(){
        if(this->head ==NULL){
            cout<<"undeflow";
            return __WINT_MIN__;
        }
        Node* new_head = this->head-> next;
        this->head->next = NULL;
        Node * tobeRemoved = this-> head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head= new_head;
        return result;
    }

    int getTop(){
        if(this->head== NULL){
            cout<<"underflow\n";
            return __WINT_MIN__;
        }
        return this->head->data;
    }

    int size(){
        return this->currsize;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<'\n';
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<'\n';
    st.push(8);

    st.pop();
    st.pop();

    cout<<st.getTop()<<'\n';

    return 0;
}