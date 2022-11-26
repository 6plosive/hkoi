#include <bits/stdc++.h>
using namespace std;

void _01006(){
    int initbal, n, now, count=0;
    cin>>initbal>>n;
    for(int i=0;i<n;i++){
        cin>>now;
        initbal-=now;
        if(initbal<=0){
            initbal+=250;
            count++;
        }
    }
    cout<<'$'<<count*250<<endl;
}

int main(){
	_01006();
}