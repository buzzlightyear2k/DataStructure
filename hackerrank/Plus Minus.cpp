#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	float dem=0,dem1=0,dem2=0;
	
	for(int i=0;i<n;i++){
		if(a[i]>0) dem++;
		else if(a[i]<0) dem1++;
		else if(a[i]==0) dem2++;
	}
	
	
	
	printf("%.6f\n",dem/n);
	printf("%.6f\n",dem1/n);
	printf("%.6f\n",dem2/n);
}
