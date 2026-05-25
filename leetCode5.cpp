// leaf nodes of a binary tree
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

 Node(int val ){
     data = val;
     left = right = NULL;
     }
};
void leafNode(Node* root){
    if(root == NULL)
    return ;
    
    if(root-> left == NULL && root-> right == NULL){
        cout<<root->data <<" ";
        return;
    }
    //recursive calls
    leafNode(root->left);
    leafNode(root-> right);
}

int main() {
  Node* root =new Node(1);
  root->left =new Node(2);
  root->right = new Node(3);
  root->left->left= new Node(5);
  root->left->right=new Node(4);
  root->right->left=new Node(6);
  
  leafNode(root);

    return 0;
}