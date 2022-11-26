#include <bits/stdc++.h>
using namespace std;

void M1901(){
	double x,y;
	cin>>x>>y;
	cout << fixed << setprecision(20);
	cout<<(double)x*y/2+(double)(x*x*M_PI/16);
}

int main(){
	M1901();
}