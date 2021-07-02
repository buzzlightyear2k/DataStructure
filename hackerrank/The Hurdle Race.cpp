#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n,k;
	cin>>n>>k;
	
	int a[n+2];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int max=0;
	
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	
	if(max-k<=0) cout<<0;
	else cout<<max-k;
}
