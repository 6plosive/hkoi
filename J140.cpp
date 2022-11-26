#include <bits/stdc++.h>
using namespace std;
#define ll long long

void J140(){
    ll N,firstint;
    cin>>N;
    for(ll i=1;i<=N;i++){
        firstint=i*i;
        for(ll j=0;j<N;j++){
            cout<<firstint+(i*j)<<' ';
        }
        cout<<endl;
    }
}

int main(){
	J140();
}