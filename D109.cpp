#include <bits/stdc++.h>
using namespace std;
int N;

void printlol(int money){
    for(int i=0;i<N/money;i++) cout<<money<<endl;
    N-=N/money*money;
}

int main(){
    cin>>N;
    if(N>=1000) printlol(1000);
    if(N>=500) printlol(500);
    if(N>=100) printlol(100);
    if(N>=50) printlol(50);
    if(N>=20) printlol(20);
    if(N>=10) printlol(10);
}