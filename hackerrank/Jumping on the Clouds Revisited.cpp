#include <bits/stdc++.h> 
using namespace std; 


int main(){
	int n,k;
	int x=100;
	cin>>n>>k;
	int c[n+2];
	for(int i=0;i<n;i++) cin>>c[i];

	int temp=0;
	
	while(true){
		temp=(temp+k)%n;
		if(c[temp]==0) x-=1;
		else x-=3;
		
		if(temp==0) break;
	}
	
	cout<<x;
}
