#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	vector<pair<ll,float>> list;
	int n;
	cin>>n;
	while(n--){
		pair<ll,float> now;
		cin>>now.first>>now.second;
		list.push_back(now);
	}
	float total=0;
	cin>>n;
	while(n--){
		ll num;
		cin>>num;
		for(auto& ele:list){
			if(num==ele.first){
				total+=ele.second;
				break;
			}
		}
	}
	cout<<fixed<<setprecision(1)<<total<<endl;
}