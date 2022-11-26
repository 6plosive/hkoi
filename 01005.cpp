#include <bits/stdc++.h>
using namespace std;

void _01005(){
    string filename="";
    getline(cin, filename);
    filename=filename.substr(0, filename.length()-4);
    string result="";
    for(char& c:filename){
        result = c+result;
    }
    cout<<result<<".mp3"<<endl;
}

int main(){
	_01005();
}