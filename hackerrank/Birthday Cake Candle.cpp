#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int max=0;
	
	sort(a,a+n);
	max=a[n-1];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==max) dem++;
	}
	cout<<dem;
}
