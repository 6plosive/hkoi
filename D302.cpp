#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int spc=1;
    getline(cin,s);
    for(char c:s) if(c==' ') spc++;
    cout<<s.length()<<endl<<spc<<endl;
}