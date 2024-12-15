/**
 * Pre Order -> LRN
 * First Print left
 * Then go to the Right and print
 * Then print Node
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
void Postorder(Node *root)
{
    if(root == NULL)
    return;

    //left
    Postorder(root->left);

    //right
    Postorder(root->right);

    //Node
    cout<<root-> data<<" ";
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

    //Post order print
    cout<<"Post order: ";
    Postorder(root);
}
