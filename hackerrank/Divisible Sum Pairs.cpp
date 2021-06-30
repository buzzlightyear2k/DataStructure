#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+2];
	
	for(int i=0;i<n;i++) cin>>a[i];
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((a[i]+a[j])%k==0) dem++;
		}
	}
	cout<<dem;
}
