#include <bits/stdc++.h>
using namespace std;

void D206(){
	int n;
	cin>>n;
	cout<<n<<endl;
	while(n!=1){
		if(n%2==1) (n*=3)++;
		else n/=2;
		cout<<n<<endl;
	}
}

int main(){
	D206();
}