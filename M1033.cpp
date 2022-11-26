#include <bits/stdc++.h>
using namespace std;

void M1033(){
	int n,count=0;
	cin>>n;
	vector<bool> jails={0};
	jails.resize(n);
	for(int i=1;i<=n;i++){
		for(int j=i-1;j<n;j+=i){
			jails[j]=!jails[j];
		}
	}
	for(auto x:jails) if(x)count++;
	cout<<count<<endl;
}

int main(){
	M1033();
}