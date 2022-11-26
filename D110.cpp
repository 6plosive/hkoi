#include <bits/stdc++.h>
using namespace std;

void D110(){
	char a1,b1;
	int a2,b2;
	cin>>a1>>a2>>b1>>b2;
	int ans=(abs(a1-b1)>abs(a2-b2))?abs(a1-b1):abs(a2-b2);
	cout<<ans<<endl;
}

int main(){
	D110();
}