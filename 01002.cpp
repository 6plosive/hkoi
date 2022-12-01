#include <bits/stdc++.h>
using namespace std;

int main(){
	string target,search;
	cin>>search>>target;
	int count=0;
	bool nice=true;
	int iterate = search.length()-target.length()+1;
	if(target.empty()){
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<iterate;i++){
		if(search.substr(i,target.length())==target)count++;
	}
	cout<<count<<endl;
}