/**
 * Pre Order -> NLR
 * First Print Node
 * Then go to the left and print
 * Then print right
 * 
 * Work flow:
 * Constructor
 * Pre order function(here the function will tell what to do first)
 * Binary tree function(here new node will be created and left and child node value will be taken)
 * Main Function(Here root will be created and tranversal function will be called)
 * 
 */

#include <iostream>
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

//Pre_order traversal
void Preorder(Node *root)
{
    if(root == NULL)
    return;

    //Node
    cout<<root-> data<<" ";

    //left
    Preorder(root->left);

    //right
    Preorder(root->right);
}



//Binary tree function
Node* binary_tree()
{
    int x;
    cin>>x;
    if(x == -1)
    return NULL;

    Node* temp = new Node(x);

    //left side
    cout<<"Enter value of left child "<<x<<": ";
    temp->left = binary_tree();

    //right side
    cout<<"Enter value of right child "<<x<<": ";
    temp->right = binary_tree();
    return temp;
}

//main function
int main()
{
    //Tree creation
    cout<<"Enter value of root node: ";
    Node* root;
    root = binary_tree(); 

    //Pre order print
    cout<<"Pre order: ";
    Preorder(root);
}
