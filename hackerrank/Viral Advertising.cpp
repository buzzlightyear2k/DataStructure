#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n;
	cin>>n;
	if(n==1) cout<<2;
	
	int share=5;
	int like=2;
	int sum=2;
	
	for(int i=2;i<=n;i++){
		share=like*3;
		like=share/2;
		
		sum+=like;
	}
	cout<<sum;
}
