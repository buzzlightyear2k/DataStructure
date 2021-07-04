#include <bits/stdc++.h> 
using namespace std; 

int reverse(int a){
	int temp=0;
	while(a!=0){
		int d=a%10;
		temp=temp*10+d;
		a/=10;
	}
	return temp;
}

int main(){
	int i,j,k;
	cin>>i>>j>>k;
	int dem=0;
	for(int x=i;x<=j;x++){
		int y=reverse(x);
		if((x-y)%k==0) dem++;
	}
	cout<<dem;
}
