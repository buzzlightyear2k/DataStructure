#include <bits/stdc++.h> 
using namespace std; 

struct Node{
	int data;
	Node* next;
};

struct Node*head;
Node*ptr;

void Insert(int x){
	Node*temp=new Node();
	temp->data=x;
	if(head==NULL){
		head=temp;
		ptr=head;
	}
	else{
		while(ptr->next!=NULL){
			ptr=ptr->next;
		}
		ptr->next=temp;	
	}
}

void Print(){
	Node*temp=head;
	cout<<"Day la: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void reversePrint(Node* head) {	
    if(head==NULL) return;
    else{
        reversePrint(head->next);
        cout<<head->data<<endl;
    }

}

int main(){
	head=NULL;
	ptr=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		Insert(y);
	}
	reversePrint(head);
}
