#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
};
void getIntersection(Node* head1, Node* head2){
	Node* slow = head1;
	while(slow->next!=NULL)
		slow = slow->next;
    cout<<slow->data<<endl;
	slow->next = head2;
	slow= head1->next;
	Node* fast = head1->next->next;
	while(fast!=slow){
		slow = slow->next;
		fast = fast->next->next;
	}
    cout<<fast->data<<endl;
	fast = head1;
	while(fast && slow){
		fast = fast->next;
		slow = slow->next;
        if(fast == slow)
            break;
	}
	cout<<fast->data;
}
int main(){
	Node* newNode; 
    // Addition of new nodes 
    Node* head1 = new Node(); 
    head1->data = 10; 
  
    Node* head2 = new Node(); 
    head2->data = 3; 
  
    newNode = new Node(); 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = new Node(); 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 

    getIntersection(head1, head2);
}