#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++) cin>>a[i];
	int d,m;
	
	cin>>d>>m;
	
	int ans=0;
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<i+m;j++){
			sum+=a[j];
		}
		if(sum==d) ans++;
	}
	cout<<ans;
}
