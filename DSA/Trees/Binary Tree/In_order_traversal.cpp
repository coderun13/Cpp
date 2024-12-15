/**
 * Pre Order -> LNR
 * First Print left
 * Then go to the node and print
 * Then print right
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

//In_order traversal
void Inorder(Node *root)
{
    if(root == NULL)
    return;

    //left
    Inorder(root->left);

    //Node
    cout<<root-> data<<" ";

    //right
    Inorder(root->right);
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
    //tree creation
    cout<<"Enter value of root node: ";
    Node* root;
    root = binary_tree(); 

    //In order print
    cout<<"In order: ";
    Inorder(root);
}