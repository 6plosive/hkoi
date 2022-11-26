#include <bits/stdc++.h>
using namespace std;

void space(int n){
	for(int i=0;i<n;i++) cout<<' ';
}

void D204(){
	int N;
	cin>>N;
	if(N==1) cout<<"#\n";
	else{
		int frontspace=N/2;
		int midspace=N-1;
		space(N/2);
		cout<<"#\n";
		for(int i=1;i<N-1;i++){
			frontspace--;
			midspace-=2;
			//cout<<abs(frontspace);
			//cout<<(N-2)-abs(midspace);
			space(abs(frontspace));
			cout<<'#';
			space((N-2)-abs(midspace));
			cout<<"#\n";
		}
		space(N/2);
		cout<<"#\n";
	}
}

int main(){
	D204();
}