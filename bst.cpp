// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int main() {
  Node* root =new Node();
  root-> data= 10;
  root-> left=NULL;
  root-> right=NULL;
  
  Node* leftNode= new Node();
  leftNode->data =4;
  leftNode->left = NULL;
  leftNode->right = NULL;
  
   Node* rightNode= new Node();
  rightNode->data =19;
  rightNode->left = NULL;
  rightNode->right = NULL;
  
    root->left =leftNode;
    root->right =rightNode;
 
    cout<<"root "<<root->data<<endl;
    cout<<"left "<<root->left->data<<endl;
    cout<<"right "<<root->right->data<<endl;
    return 0;
}