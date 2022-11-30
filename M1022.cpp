#include <bits/stdc++.h>
using namespace std;

bool lol(vector<pair<int,int>>& list,int __i,int ymod){
	for(int i=__i;i<list.size();i++){
		if(list[__i].first==list[i].first){
			if(list[__i].second+ymod==list[i].second){
				return true;
			}
			if(list[__i].second+ymod<list[i].second) return false;
		}else{//already useless cuz not same x
			return false;
		}
	}
	return false;
}

int main(){
	int n,x,y;
	cin>>n>>x>>y;
	vector<pair<int,int>> list(n);
	vector<pair<int,int>> find;
	for(auto& l:list) cin>>l.first>>l.second;
	sort(list.begin(),list.end());
	int count=0;
	//for(auto l:list) cout<<l[0]<<l[1]<<endl;
	for(int i=0;i<list.size();i++){
		if(lol(list,i,y)){
			find.push_back(make_pair(list[i].first+x,list[i].second));
		}
		if(!find.empty()) while(list[i].first>find.front().first) find.erase(find.begin());
		if(find.front().first==list[i].first){
			for(int j=i;j<list.size();j++){
				if(list[i].first==list[j].first){
					if(list[i].second+y==list[j].second){
						count++;
						find.erase(find.begin());
						break;
					}else if(list[i].second+y<list[j].second) break;
				}else break;
			}
		}
	}
	cout<<count<<endl;
}