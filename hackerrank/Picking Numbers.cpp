#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	
	int a[n+2];
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	int dem[102]={0};
	
	for(int i=0;i<n;i++) dem[a[i]]++;
	int max=0;
	for(int i=0;i<102;i++){
		if(dem[i]!=0 && dem[i+1]!=0){
			if(dem[i]+dem[i+1]>max) max=dem[i]+dem[i+1];
		}else if(dem[i]!=0 && dem[i+1]==0){
			if(dem[i]>max) max=dem[i];
		}
	}
	cout<<max;
}
