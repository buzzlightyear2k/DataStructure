#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n,k;
	cin>>n>>k;
	int a[n+2];
	int b;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cin>>b;
	
	sum-=a[k];
	sum/=2;
	
	if(b-sum==0){
		cout<<"Bon Appetit";
	}else{
		cout<<b-sum;
	}
	
	
}
