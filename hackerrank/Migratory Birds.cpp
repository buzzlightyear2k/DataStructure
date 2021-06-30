#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int dem[6]={0};	
	
	for(int i=0;i<n;i++){
		int id=a[i];
		dem[id]++;			
	}
	
	int max=0;
	int x=0;
	for(int i=1;i<=5;i++){
		if(max<dem[i]){
			max=dem[i];
			x=i;
		}
	}
	cout<<x;
	
	
}
