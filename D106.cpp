#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%100==11||n%100==12||n%100==13)cout<<n<<"th"<<endl;
    else{
    int s=n%10;
    if(s==1) cout<<n<<"st"<<endl;
    else if(s==2) cout<<n<<"nd"<<endl;
    else if(s==3) cout<<n<<"rd"<<endl;
    else cout<<n<<"th"<<endl;
    }
}