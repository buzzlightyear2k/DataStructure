#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int a[n+2];
	
	for(int i=0;i<n;i++) {
		int z=(i+n-d)%n;
		cin>>a[z];
	}
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
