#include <bits/stdc++.h>
using namespace std;

void J151(){
	int n,m;
	cin>>n>>m;
	if(m!=0){
		cout<<m<<' ';
		n--;
	}
	if(n%2==1){
		cout<<"0 ";
		n--;
	}
	int count=1829347;
	while(n>0){
		cout<<count<<" -"<<count<<' ';
		count++;
		n-=2;
	}
	cout<<endl;
}

int main(){
	J151();
}