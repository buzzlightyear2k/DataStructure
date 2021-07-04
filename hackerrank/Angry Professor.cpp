#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int a[n+2];
	
	for(int i=0;i<n;i++) cin>>a[i];
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]<=0) dem++;
	}
	
	if(dem>=k) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
}
