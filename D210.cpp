#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> coords(n);
	for(auto& coord:coords){
		cin>>coord.first>>coord.second;
	}
	float a=0;
	for(int i=0;i<n;i++){
		a+=(coords[i].second+coords[(i+1)%(n)].second)*(coords[i].first-coords[(i+1)%(n)].first);
	}
	cout<<fixed<<setprecision(1)<<a/2<<endl;
}