#include <bits/stdc++.h>
using namespace std;

void D203(){
    char N;
    int intn;
    bool clap=false;
    string now="";
    cin>>intn;
    N=intn+'0';
    for(int j=0;j<=90;j+=10){
        for(int i=1;i<=10;i++){
            //cout<<i+j<<' ';
            now=to_string(i+j);
            for(char c:now){
                if(c==N){
                    clap=true;
                    break;
                }
            }
            if((i+j)%intn==0){
                clap=true;
            }
            if(clap){
                cout<<"Clap ";
            }else{
                cout<<i+j<<" ";
            }
            clap=false;
        }
        cout<<endl;
    }
}

int main(){
	D203();
}