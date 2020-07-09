#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node* left; 
    Node* right; 
    int data; 
};
Node* newNode(int key) 
{ 
    Node* node = new Node(); 
    node->left = node->right = NULL; 
    node->data = key; 
    return node; 
} 
int inorder(Node* root){
	if()
}
int main(){


	cout<<inorder(root);
}