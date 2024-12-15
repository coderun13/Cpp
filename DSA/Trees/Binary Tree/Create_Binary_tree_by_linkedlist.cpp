/**
 * Make all left child of the parent then move to the right side
 * Logic: if x == -1 return NULL
 * else create node
 * go to left side
 * then to the right side
 * return node address
 * 
 * Work Flow:
 * Constructor
 * Binary Tree function(craete new node then take left then take right child)
 * Main function(make a root)
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
    cout<<"Enter value of root node: ";
    Node* root;
    root = binary_tree(); 
}