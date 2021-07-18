#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int a[n+2];
	int b[n+2]={0};
	
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		b[i]=a[(i+d)%n];
	}
	
	for(int i=0;i<n;i++) cout<<b[i]<<" ";
}
