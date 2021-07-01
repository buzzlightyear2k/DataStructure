#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	char a[n+2];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	int x=0;
	int kt=0;
	int dem=0;
	
	for(int i=0;i<n;i++){
		if(a[i]=='U') x++;
		else x--;
		
		if(x<0){
			kt=1;
		}
		
		if(x==0 && kt==1){
			dem++;
			kt=0;
		}
	}
	cout<<dem;
}
