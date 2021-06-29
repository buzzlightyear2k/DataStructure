#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int x=1;
	while(x<=n){
		int c=n-x;
		for(int i=0;i<c;i++){
			cout<<" ";
		}
		for(int i=0;i<x;i++){
			cout<<"#";
		}
		x++;
		cout<<endl;
	}
}
