#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n;
	cin>>n;
	
    ll b = floor(sqrt(n * 2));
	bool square=false,tri= b * (b + 1) / 2 == n;
	if((ll)sqrt(n)*(ll)sqrt(n)==n) square=true;
	if(square&&tri){
		cout<<"Both"<<endl;
	}else if(tri){
		cout<<"Triangular"<<endl;
	}else if(square){
		cout<<"Square"<<endl;
	}else cout<<"Neither"<<endl;
	return 0;
}
