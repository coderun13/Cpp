/**
 * Stacks -> LIFO data
 * insert at top -> push
 * remove from top -> pop
 * time complexity -> with array-> O(1)
 * Stack implememtation using array -> top index = -1(underflow condition), top index= arr.size()-1;
 * Stack using linkedlist -> push-> insertAtHead and pop-> removefromHead
 * overflow condition -> stack is full then elements are added.
 * underflow condition-> stack is empty then element is removed.
 * 
 */

# include<iostream>
using namespace std;

class Stack {
    int capacity;
    int * arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int(c);
        this->top = -1;
    }

    void push(int data){
        if(this ->top == this->capacity -1){
            cout<<"Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]= data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"underflow\n";
            return __WINT_MIN__;
        }
        this->top--; //element remove

    }

    int getTop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return __WINT_MIN__;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top== -1;
    }

    bool isFull(){
        return this->top== -this->capacity-1;
    }

    int size(){
        return this -> top +1;
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
