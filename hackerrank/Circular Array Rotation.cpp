#include <bits/stdc++.h> 
using namespace std; 	

int main(){
	int n,k,q;
	cin>>n>>k>>q;
	
	int a[n+2];
	int b[n+2];
	for(int i=0;i<n;i++){
		cin>>b[(i+k)%n];	
	}
	
	
	
	
	while(q--){
		int x;
		cin>>x;
		cout<<b[x]<<endl;
	}
}
