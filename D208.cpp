#include <bits/stdc++.h>
using namespace std;
#define ll long long

void D208(){
    ll N, now, snd = -2147483648, fst = -2147483648;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>now;
        if(now>fst){
            snd=fst;
            fst=now;
        }else if(now>snd){
            snd=now;
        }
    }
    cout<<fst<<endl<<snd<<endl;
}

int main(){
	D208();
}