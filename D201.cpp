#include <bits/stdc++.h>
using namespace std;
#define ll long long

void D201(){
	ll n;
	cin>>n;
	if(n==0) cout<<0<<endl;
	else if(n==1) cout<<1<<endl;
	else{
	ll a=0,b=1,temp;
	for(ll i=1;i<n;i++){
		temp=b;
		b+=a;
		a=temp;
	}
	cout<<b<<endl;
	}
}

int main(){
	D201();
}