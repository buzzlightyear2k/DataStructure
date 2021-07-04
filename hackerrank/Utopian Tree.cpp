#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long sum=1;
		
		for(int i=1;i<=n;i++){
			if(i%2==0) sum++;
			else sum*=2;
		}
		cout<<sum<<endl;
	}
}
