//Using Morris


#include<bits/stdc++.h>
using namespace std;
Node* ksmall(Node* root, int k){
	if(root == NULL)
		return NULL;
	int count = 0;
	Node* curr = root;
	while(curr!= NULL){
		if(curr->left == NULL){
			count++;
			if(count == k)
				return curr;
			curr = curr->right;
		}
		else{
			Node* pre = curr->left;
			while(pre->right != NULL && pre != curr)
				pre = pre->right;
			if(pre->right == NULL){
				pre->right = curr;
				curr = curr->left;
			}
			else{
				pre->right = NULL;
				count++;
				if(count == k)
					return curr;
				curr = curr->right;
			}
		}
	}
}
int main(){

}