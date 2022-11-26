#include <bits/stdc++.h>
using namespace std;
#define ll long long

void D309(){
	string s,t;
	ll sint=0, tint=0;
	cin>>s>>t;
	for(char& c:s) c=tolower(c);
	for(char& c:t) c=tolower(c);
	if(s==t) cout<<"Equal"<<endl;
	else if(s<t) cout<<"Smaller"<<endl;
	else cout<<"Greater"<<endl;
}

int main(){
	D309();
}