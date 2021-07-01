#include <bits/stdc++.h> 
using namespace std; 	

int main(){
	int n,p;
	cin>>n>>p;
	
	int x;
	
	if(n%2==0){
		x=(n+1-p)/2;
	}else{
		x=(n-p)/2;
	}
	int ans=min(x,p/2);
	
	cout<<ans;
}
