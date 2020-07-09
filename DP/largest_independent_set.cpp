#include<bits/stdc++.h>
using namespace std;
//here we have to find size, could have easily modified for values
int LIS(Node* head){
	if(head == NULL)
		return 0;

	int exc = LIS(head->left) + LIS(head->right);
	int inc = 1;

	if(head->left)
		inc += LIS(head->left->left) + LIS(head->left->right);

	if(head->right)
		inc += LIS(head->right->left) + LIS(head->right->right);
}