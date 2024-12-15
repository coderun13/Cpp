/* This is level wise creation
 * Logic
 * Make constructure (means a structure for node)
 * Build main function (How the tree will form by queue)
 * Logic of main function: take root as input then make node pointer as new node and push the value.
 * Build the binary tree : while queue is not empty
 * temp will point at first and it will pop
 * ask to enter the left child of root
 * left child should not be -1 then push that data to left side of new node
 * ask to enter the right child of root
 * right child should not be -1 then push that data to right side of new node
 * 
 * Work Flow:
 * Constructor
 * Main Function
 * Binary tree structure
 * Left node value
 * Left node creation
 * Right Node value
 * Right Node creation
 */

#include<iostream>
#include<queue>
using namespace std;

// constructor
class Node{
    public:
    int data;
    Node* left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

// Main Function
// create root, take root value, push root value
int main(){
    int x1;
    cout<<"Enter the value of root: ";
    cin>> x1;
    int first, second;
    queue<Node*>q;  //node * ka name is q
    Node* root = new Node(x1);
    q.push(root);


    //Building binary tree

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        //left node value
        cout<<"Enter the value of left child of "<<temp->data<<": ";
        cin>>first;  //left child value

        //left node creation
        if(first!= -1){
        temp->left = new Node(first);
        q.push(temp->left);
        }

        //right node value
        cout<<"Enter the value of the right child of "<<temp->data<<": ";
        cin>>second;

        //Right Node creation
        if(second!= -1){
        temp->right = new Node(second);
        q.push(temp->right);
        }
    }
}