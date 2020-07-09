#include<bits/stdc++.h>
using namespace std;
struct Node { 
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
map<int, int> m;
void preorder(Node* head, int l){
	if(head == NULL)
		return;
	if(m.find(l) == m.end()){
		m.insert({l, head->data});
	}
	preorder(head->right, l+1);
	preorder(head->left, l-1);
}
int main(){
	Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->right = newNode(4); 
    root->left->right->right = newNode(5); 
    root->left->right->right->right = newNode(6); 
	preorder(root, 0);
	for(auto it = m.begin();it!=m.end();it++){
		cout<<it->second<<" ";
	}
	
}