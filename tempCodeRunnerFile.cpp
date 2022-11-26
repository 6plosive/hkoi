#include <bits/stdc++.h>
using namespace std;

void D102(){
	string price;
	cin>>price;
	int calc=0;
	int pointpos;
	price=price.substr(1, price.length()-1);
	for(int i=0;i<price.length();i++){
		if(price[i]=='.') pointpos=i;
		else{
			calc=calc*10+(price[i]-'0');
		}
	}
	if(calc%2!=0) calc++;
	if(to_string(calc).length()!=to_string(calc/2).length()) pointpos--;
	calc/=2;
	string calcstring = to_string(calc);
	cout<<'$'<<calcstring.substr(0,pointpos)<<'.'<<calc%10<<endl;
}

int main(){
	D102();
}