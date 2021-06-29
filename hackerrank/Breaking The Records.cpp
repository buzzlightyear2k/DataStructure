#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++) cin>>a[i];
	
	int dem=0;
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			dem++;
			max=a[i];
		}
	}
	
	int dem1=0;
	int min=a[0];
	
	for(int i=1;i<n;i++){
		if(a[i]<min){
			dem1++;
			min=a[i];
		}
	}
	cout<<dem<<" "<<dem1;
}
