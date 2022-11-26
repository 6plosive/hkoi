#include <bits/stdc++.h>
using namespace std;

void D104(){
	int a,b,c;
	cin>>a>>b>>c;
	double ans1, ans2;
	double mod=((b*b)-(4*a*c));
	if(mod<0){
		cout<<"None"<<endl;
		return;
	}
	mod=sqrt(mod);
	ans1=(-b+mod)/2/a;
	ans2=(-b-mod)/2/a;
	cout<<fixed;
	cout<<setprecision(3);//<<ans1<<' '<<ans2<<endl;
	if(ans1==ans2) cout<<ans1<<endl;
	else if(ans1<ans2) cout<<ans1<<' '<<ans2<<endl;
	else cout<<ans2<<' '<<ans1<<endl;
}

int main(){
	D104();
}