#include <bits/stdc++.h>
using namespace std;
int main(){
	float w,h;
	cin>>w>>h;
	float bmi=w/h/h;
	cout<<fixed<<setprecision(3)<<bmi<<endl;
	if(bmi<18.5) cout<<"Underweight"<<endl;
	else if(bmi<23) cout<<"Normal"<<endl;
	else if(bmi<25) cout<<"Overweight"<<endl;
	else cout<<"Obese"<<endl;
}