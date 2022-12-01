#include <bits/stdc++.h>
using namespace std;

bool notfinished(string& result){
	for(auto& c:result) if(c=='_') return true;
	return false;
}

int main() {
	string h;
	cin>>h;
	string result="";
	for(int i=0;i<h.length();i++) result+='_';
	while(notfinished(result)){
		char c;
		cin>>c;
		for(int i=0;i<h.length();i++){
			if(h[i]==c) result[i]=c;
		}
		cout<<result<<endl;
	}
	return 0;
}
