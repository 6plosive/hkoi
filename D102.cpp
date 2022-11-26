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
	calc/=2;
	string calcstring = to_string(calc);
	//cout<<((price[0]=='0'||price[0]=='1')&&price[1]=='.')<<endl;
	if((price[0]=='0'||price[0]=='1')&&price[1]=='.') calcstring='0'+calcstring;
	//if(to_string(calc*2).length()!=calcstring.length()) pointpos--;
	if(price.length()-1!=calcstring.length()) pointpos--;
	//cout<<calcstring<<pointpos<<endl;
	cout<<'$'<<calcstring.substr(0,pointpos)<<'.'<<calc%10<<endl;
}

int main(){
	D102();
}