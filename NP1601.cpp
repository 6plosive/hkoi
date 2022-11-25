#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("pencil.in");
    ofstream out("pencil.out");
    int n,a,b,now=0,ans=2000000000;
    in>>n;
    for(int i=0;i<3;i++){
        in>>a>>b;
        now=n/a*b;
        if(n%a!=0) now+=b;
        ans=(ans>now)?now:ans;
        now=0;
    }
    out<<ans<<endl;
}