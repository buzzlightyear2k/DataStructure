#include <bits/stdc++.h> 
using namespace std; 

struct Node{
	int data;
	Node* next;
};

Node* head;
Node*ptr;
void Insert(int x){
	Node*temp=new Node();
	temp->data=x;
	if(head==NULL){
		head=temp;
		ptr=head;
	}
	else{
		while(head->next!=NULL){
			head=head->next;
		}
		head->next=temp;		
	}
}
void Print(){
	Node*temp=ptr;
	cout<<"Day la: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void Delete(int n){
	Node*temp1=ptr;
	if(n==1){
		ptr=temp1->next;
		free(temp1);
		return;
	}
	for(int i=0;i<n-2;i++){
		temp1=temp1->next;
	}
	Node*temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}



int main(){
	head=NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cin>>n;
	Delete(n);
	Print();
}
