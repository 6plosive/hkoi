#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream in("count.in");
    ofstream out("count.out");
    int n,x,count=0;
    in>>n>>x;
    for(int i=1;i<=n;i++){
        int process=i;
        while(process!=0){
            if(x==process%10) count++;
            process/=10;
        }
    }
    out<<count<<endl;
}