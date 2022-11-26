#include <bits/stdc++.h>
using namespace std;
#define D105_aft cout<<"After"<<endl
#define D105_be4 cout<<"Before"<<endl
#define D105_same cout<<"Same"<<endl
#define ll long long
#define dbg(d) cout<<#d<<'='<<d<<endl

void D105(){
    int y1,y2,m1,m2,d1,d2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    if(y1>y2){
        D105_aft;
        return;
    }
    if(y1<y2){
        D105_be4;
        return;
    }
    if(m1>m2){
        D105_aft;
        return;
    }
    if(m1<m2){
        D105_be4;
        return;
    }
    if(d1>d2){
        D105_aft;
        return;
    }
    if(d1<d2){
        D105_be4;
        return;
    }
    D105_same;
}

int main(){
	D105();
}