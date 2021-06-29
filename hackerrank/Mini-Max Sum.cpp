#include <bits/stdc++.h> 
using namespace std; 

int main(){
	long long a[5];
	long long sum=0;
	for(long long i=0;i<5;i++){
		cin>>a[i];
		sum+=a[i];
	}
	long long min=sum,max=0;
	
	for(int i=0;i<5;i++){
		if(sum-a[i]<min) min=sum-a[i];
	}
	
	for(int i=0;i<5;i++){
		if(sum-a[i]>max) max=sum-a[i];
	}
	cout<<min<<" "<<max;
}
