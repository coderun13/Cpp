/**
 * Linear data structure used to stored list of values.
 * Array is a single memory block with partition.
 * Linked list has memory blocks linked to each other.
 * Challenges of array -> static size,contiguous memory allocation,inserting and deletion is costly.
 * Advantages of a linked list over an array -> dynamic size allocation, non- contiguous memory allocation,insertion and deletion is non expensive.
 * Listnode -> block of memory[2 parts][data and next pointer address]
 * Head Node -> points to the first node.
 * Tail Node -> stores NULL pointer
 * Types -> Singly linked list, Doubly linked list, circular linked list.
 * Singly linked list -> Every node points to its successor node.
 * Doubly linked list -> Every node is connected to next and the previous node. 
 * Circular linked list -> The last node points to the head node.
 * Indexing is not there in linked list as array.
 */

// Implementation of a listnode in a singly linked list.
  
# include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){ //constructor
        val = data;
        next = NULL;
    }

};

void insertAtHead(Node* &head, int val ){
    Node* new_node = new Node(val);
    new_node-> next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp=head;
    while(temp->next!= NULL){
        temp=temp->next;
    }

    temp->next = new_node;//temp reached to the last node
}

void insertAtPosition(Node* &head,int val, int pos){
  
    if(pos==0){
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }

    //temp is pointing to node at pos-1
    new_node->next = temp->next; 
    temp->next = new_node;

}

void updateAtPosition(Node* &head,int k, int val){
    Node* temp = head;
    int curr_pos = 0;

    while(curr_pos!= k){
        temp = temp->next;
        curr_pos++;
    }

    //temp will be pointing to the kth node
    temp -> val = val;

}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    //free(temp);
}

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    //now second_last points to second last node
    Node* temp = second_last->next;
    second_last->next=NULL;
    //free(temp);
}

void deleteAtPosition(Node* &head, int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }

    int curr_pos = 0;
    Node* prev = head;
    while (curr_pos!= pos-1){
        prev=prev->next;
        curr_pos++;
    }

    //prev is pointing to node at pos-1
    Node* temp = prev->next;
    prev->next = prev->next->next;
   // free(temp);
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;   
    }
    cout<<"NULL"<<endl;   
}

int main(){

    Node* head = NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    insertAtTail(head,3);
    display(head);
    insertAtPosition(head,4,1);
    display(head);
    updateAtPosition(head,2,5);
    display(head);

    // deleteAtHead(head);
    // display(head);
    // deleteAtTail(head);
    // display(head);
    deleteAtPosition(head,1);
    display(head);

    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    return 0;
}

/**
 * Traversal in a singly linked list
 * Temp = temp -> next 
 * Insertion at k th position in a singly linked list.
 * add a node at the start and move head to the first.(at start)
 * add a node at the end and the node will point to NULL. (at end)
 * traverse till position-> -1 and then to temp-> next (for arbitrary position)
 * Time complexity of insertion at the start -> o(1)
 * Time complexity of insertion at the end -> o(n), when tail pointer is given then o(1). 
 * Time complexity of insertion at arbitary position -> o(n)
 */