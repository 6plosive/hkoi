#include <bits/stdc++.h>
using namespace std;

int main(){
	int m[3];
	for(auto& M:m) cin>>M;
	int diff1=m[1]-m[0], diff2=m[2]-m[1];
	int a,b,c;
	if(m[2]>=m[1]&&m[1]>=m[0]&&diff1==diff2){//test 1
		b=m[0]-diff1;
		a=diff1;
		c=m[2]+1;
		if(b<0) b+=c;//test 7
		cout<<a<<' '<<b<<' '<<c<<endl;
	}else if((diff1<0||diff2<0)&&!(diff1<0&&diff2<0)){//only 1 negative
		c=abs(diff1)+abs(diff2);
		if(diff1<0){
			m[1]+=c;
			m[2]+=c;
		}else if(diff2<0) m[2]+=c;
		diff1=m[1]-m[0];
		diff2=m[2]-m[1];
		//check diff different lol *******************
		a=diff1;
		b=m[0]-a;

		if(b<0) b+=c;//test 7

		cout<<a<<' '<<b<<' '<<c<<endl;
	}
}