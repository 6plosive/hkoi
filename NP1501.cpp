#include <bits/stdc++.h>
using namespace std;

void NP1501(){
	ifstream in("coin.in");
	ofstream out("coin.out");
	int k,total=0,track=1,now=1;
	in>>k;
	for(int i=0;i<k;i++){
		total+=track;
		now--;
		if(now==0){
			track++;
			now=track;
		}
	}
	out<<total<<endl;
}

int main(){
	NP1501();
}