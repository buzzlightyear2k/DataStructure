#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int a[26];
	for(int i=0;i<26;i++) cin>>a[i];
	
	string s;
	cin>>s;
	int max=0;
	for(int i=0;i<s.size();i++){
		int x=s[i]-'a';
		if(a[x]>max) max=a[x];
	}
	cout<<max*s.size();
}

