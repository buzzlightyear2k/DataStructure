#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int b;
	cin>>b;
	int n,m;
	cin>>n>>m;
	int x[n+2],y[m+2];
	
	for(int i=0;i<n;i++) cin>>x[i];
	for(int i=0;i<m;i++) cin>>y[i];
	
	int max=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(x[i]+y[j]>max && x[i]+y[j]<=b){
				max=x[i]+y[j];
			}
		}
	}
	if(max==0) cout<<-1;
	else cout<<max;
}
