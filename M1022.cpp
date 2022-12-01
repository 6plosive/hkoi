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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
		//cout<<list[i].first<<' '<<list[i].second;
		//if(!find.empty()) while(list[i]>find.front()) find.erase(find.begin());
		//if(!find.empty()) while(list[i].second>find.front().second) find.erase(find.begin());
		if(!find.empty()) while((list[i].first>=find.front().first&&list[i].second>find.front().second)){
			if(find.empty()) break;
			find.erase(find.begin());
		}
		//cout<<"now:"<<list[i].first<<' '<<list[i].second<<endl;
		//for(auto l:find) cout<<l.first<<' '<<l.second<<endl;
		//cout<<endl<<endl;
		if(!find.empty()){
			if(find.front()==list[i]){
				//cout<<find.front().first<<' '<<find.front().second<<endl;
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
	}
	cout<<count<<endl;
}