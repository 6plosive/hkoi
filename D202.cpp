#include <bits/stdc++.h>
using namespace std;
#define ll long long
void D202(){
    //ll N;
    //cin>>N;
    //if(N<=0) return;
    //if(N!=1) cout<<1<<endl;
    //for(ll i=2;i<=sqrt(N);i++){
    //    if(N%i==0) {
    //        cout<<i<<endl;
    //        if(N/i!=i) cout<<N/i<<endl;
    //    }
    //}
    //cout<<N<<endl;
    vector<ll> list;
    ll N;
    cin>>N;
    if(N<=0) return;
    //cout<<1<<endl;
    for(ll i=1;i<=sqrt(N);i++){
        if(N%i==0){
            list.push_back(i);
            if(N/i!=i) list.push_back(N/i);
            
        }
    }
    sort(list.begin(), list.end());
    for(ll i:list){
        cout<<i<<endl;
    }
    
}

int main(){
	D202();
}