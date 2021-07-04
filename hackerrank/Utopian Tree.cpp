#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%2==0) cout<<(long long)pow(2,((n+2)/2))-1<<endl;
		else cout<<(long long)pow(2,((n+3)/2))-2<<endl;
	}
}
