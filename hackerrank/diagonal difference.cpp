#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	int a[n+2][n+2];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i][i];
	}
	int sum1=0;
	for(int i=0,j=n-1;i<n,j>=0;i++,j--){
		sum1+=a[i][j];
	}
	cout<<abs(sum-sum1);
}
