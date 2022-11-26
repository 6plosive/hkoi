#include <bits/stdc++.h>
using namespace std;

int main(){//2000 2 14 = monday
	string topg[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	int yr,count=1;
	cin>>yr;
	for(int i=2000;i<yr;i++){
		if(i%4==0&&!(i%400!=0&&i%100==0)) count+=366;
		else count+=365;
		count%=7;
	}
	cout<<topg[count]<<endl;
}