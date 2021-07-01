#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	int dem[102]={0};
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n;i++){
		dem[a[i]]++;
	}
	int sum=0;
	for(int i=0;i<102;i++){
		if(dem[i]!=0){
			if(dem[i]%2==0){
				sum+=dem[i]/2;
			}
			else{
				sum+=(dem[i]-1)/2;
			}
		}
	}
	cout<<sum;
	
}
