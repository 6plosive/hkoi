#include <bits/stdc++.h>
using namespace std;

int arithmetic(int a, char lol, int b){
	if(lol=='+') return a+b;
	if(lol=='-') return a-b;
	if(lol=='*') return a*b;
	return 0;
}

void D108(){
	int a,b,c,result;
	char op1,op2;
	cin>>a>>op1>>b>>op2>>c;
	if(op2=='*'){
		result = b*c;
		result=arithmetic(a,op1,result);
	}else{
		result=arithmetic(a,op1,b);
		result=arithmetic(result,op2,c);
	}
	cout<<result<<endl;
}

int main(){
	D108();
}