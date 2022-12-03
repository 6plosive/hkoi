#include <bits/stdc++.h>
using namespace std;

bool isnum(char c){
	return 48<=c&&c<=57;
}

int lol(char c){
	if(isnum(c)) return c-'0';
	return c-55;//c-'A'+10
}

int main(){
	string in;
	//cout<<lol('A');
	cin>>in;
	cout<<lol(in[0])<<endl;
	int s=0;
	if(isnum(in[1])){//only 1 char prefix
		s=9*36+8*lol(in[0])+7*lol(in[1])+6*lol(in[2])+5*lol(in[3])+4*lol(in[4])+3*lol(in[5])+2*lol(in[6]);
	}else{
		s=9*lol(in[0])+8*lol(in[1])+7*lol(in[2])+6*lol(in[3])+5*lol(in[4])+4*lol(in[5])+3*lol(in[6])+2*lol(in[7]);
	}
	s%=11;
	int c=11-s;
	cout<<c<<endl;
}
