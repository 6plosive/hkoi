#include <bits/stdc++.h>
using namespace std;

void NP1701(){
	ifstream in("score.in");
	ofstream out("score.out");
	int a,b,c;
	in>>a>>b>>c;
	out<<a/5+b*3/10+c/2<<endl;
}

int main(){
	NP1701();
}