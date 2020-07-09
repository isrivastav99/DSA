#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode *left, *right;

    TreeNode(int x) {
        data = x;
        left = right = NULL;
    }
};
int imageMultiplication(Node* root){
	
}
int main()
{
    int t;
    TreeNode *child;
    cin>>t;
    while (t--)
    {
        map<int, TreeNode*> m;
        int n;
        cin>>n;
        TreeNode *root = NULL;
        while (n--)
        {
            TreeNode *parent;
            char lr;
            int n1, n2;
            cin>>n1>>n2>>lr;

            if (m.find(n1) == m.end())
            {
               parent = new TreeNode(n1);
               m[n1] = parent;
               if (root == NULL) root = parent;
            }
            else parent = m[n1];
            
            child = new TreeNode(n2);
            if (lr == 'L') parent->left = child;
            else parent->right = child;
            m[n2]  = child;
        }
     
        cout<<imageMultiplication(root) % 1000000007<<endl;
    }
}