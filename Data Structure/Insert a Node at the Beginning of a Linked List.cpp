#include <bits/stdc++.h> 
using namespace std; 

struct Node{
	int data;
	Node* next;
};

struct Node*head;

void Insert(int x){
	Node*temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
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

int main(){
	head=NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y;
		cin>>y;
		Insert(y);
		Print();
	}
}
