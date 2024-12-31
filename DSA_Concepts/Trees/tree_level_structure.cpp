#include<iostream>
#include<queue>
using namespace std;

//constructor
class Node
{
    public:
    int data;
    Node* left, *right;

    Node(int value)
    {
        data= value;
        left=right=NULL;
    }
};

//main function
int main()
{
    int x1;
    cout<<"Enter the value of root: ";
    cin>> x1;
    int first, second;
    queue<Node*>q;
    Node* root = new Node(x1);
    q.push(root);

    //build the binary tree
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" : ";
        cin>>first; //left node value

        //left node
        if(first!= -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        //right node
        cout<<"Enter the right child of "<<temp->data<<" : ";
        cin>>second; //right node value
        if(second!= -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
}
       