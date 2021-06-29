#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int x=0;
		if(a[i]>=38 && a[i]%5>0 && a[i]%5>=3){
			x=a[i]%5;
			a[i]+=5-x;
		}
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
