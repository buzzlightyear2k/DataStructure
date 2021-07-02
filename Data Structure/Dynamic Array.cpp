#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int n,q;
	
	int lastans=0;
	int type,x,y;
	int seq=0;
	int pos;
	
	cin>>n>>q;
	
	vector <vector <int>> v(n);
	
	for(int i=0;i<q;i++){
		cin>>type>>x>>y;
		
		seq=((x^lastans)%n);
		
		if(type==1){
			v[seq].push_back(y);
		}
		else if(type==2){
			pos=(y%v[seq].size());
			lastans=v[seq][pos];
			cout<<lastans<<endl;
		}
	}
	return 0;
}
