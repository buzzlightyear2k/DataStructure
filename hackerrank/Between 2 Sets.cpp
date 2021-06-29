#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a,int b){
	int x=__gcd(a,b);
	return x;
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[n+2];
	int b[m+2];
	
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	
	int res=b[0];
	for(int i=1;i<m;i++){
		res=gcd(b[i],res);		
	}
	
	int ans=a[0];
	for(int i=1;i<n;i++){
		ans=(a[i]*ans)/(gcd(a[i],ans));
	}
	int dem=0;
	for(int i=ans;i<=res;i+=ans){
		if(res%i==0) dem++;
	}
	cout<<dem;    
    	
}

