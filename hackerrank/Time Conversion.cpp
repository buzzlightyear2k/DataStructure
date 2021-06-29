#include <bits/stdc++.h> 
using namespace std; 

int main(){
	
	
	char c1,c2;
	int hh,mm,ss;
    char s[3];
	
	cin>>hh>>c1>>mm>>c2>>ss>>s;
	
	if(strcmp(s,"PM")==0 && hh!=12) hh+=12;
	if(strcmp(s,"AM")==0 && hh==12) hh=0;
	
	printf("%02d:%02d:%02d",hh,mm,ss);
}
