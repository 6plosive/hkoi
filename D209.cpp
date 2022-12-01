#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> exist;
	while(n--){
		int now;
		cin>>now;
		for(auto huh:exist) if(huh==now){
			cout<<"Invalid"<<endl;
			return 0;
		}
	}
	cout<<"Valid"<<endl;
}