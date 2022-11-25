#include <bits/stdc++.h>
using namespace std;

int main(){
    string in,rev;
    cin>>in;
    rev=in;
    reverse(rev.begin(),rev.end());
    cout<<rev<<endl;
    (in==rev)?cout<<"Yes\n":cout<<"No\n";
}