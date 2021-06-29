#include <bits/stdc++.h> 
using namespace std; 	

int main(){
	int s,t;	
	cin>>s>>t;
	
	int a,b;
	cin>>a>>b;
	
	int m,n	;
	cin>>m>>n;
	
	int arr[m+2];
	int arr1[n+2];
	
	for(int i=0;i<m;i++) cin>>arr[i];
	for(int i=0;i<n;i++) cin>>arr1[i];
	int demcam=0,demtao=0;
	for(int i=0;i<m;i++){
		arr[i]+=a;
		if(arr[i]>=s && arr[i]<=t) demcam++;
	}
	for(int i=0;i<n;i++){
		arr1[i]+=b;
		if(arr1[i]>=s && arr1[i]<=t) demtao++;
	}
	
	cout<<demcam<<endl<<demtao;
}
