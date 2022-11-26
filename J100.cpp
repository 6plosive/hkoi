#include <bits/stdc++.h>
using namespace std;

void J100(){
	int n;
	cin>>n;
	int line=n-1;
	int count=1;
	for(int i=0;i<n*2-1;i++){
		for(int j=1;j<n-abs(line);j++){
			cout<<count<<' ';
			count++;
		}
		line--;
		cout<<count<<endl;
		count++;
	}
}

int main(){
	J100();
}