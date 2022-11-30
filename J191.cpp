#include <bits/stdc++.h>
using namespace std;
#define dbg(d) cout<<#d<<'='<<d<<endl

int main(){
	int m[3];
	for(auto& M:m) cin>>M;
	int diff1=m[1]-m[0], diff2=m[2]-m[1];
	int a,b,c=0;
	/*if((diff1<0||diff2<0)&&!(diff1<0&&diff2<0)){//only 1 negative normalize
		c=abs(diff1)+abs(diff2);
		if(diff1<=0){
			m[1]+=c;
			m[2]+=c;
		}else if(diff2<=0) m[2]+=c;
		diff1=m[1]-m[0];
		diff2=m[2]-m[1];
	}*//*else if((diff1<0&&diff2<0)&&diff1==diff2){//both negative normalize
		//b=m[0]-diff1;
		//dbg(b);
		c=m[0]+1;
		//dbg(c);
		m[1]+=c;
		m[2]+=2*c;
		diff1=m[1]-m[0];
		diff2=m[2]-m[1];
		//dbg(m[1]);
		//dbg(m[2]);
		//dbg(diff1);
		//dbg(diff2);
	}*/
	if(diff1==diff2){//test 1
		//b=m[0]-diff1;
		//a=diff1;
		//c=(c==0)?m[2]+1:c;
		//if(b<0) b+=c;//test 7
		for(auto M:m) c=(c>M)?c:M;
		c++;
		a=(diff1+c)%c;
		b=(m[0]-a+c)%c;
		cout<<a<<' '<<b<<' '<<c<<endl;
	}//else if(diff1!=diff2&&m[2]>=m[1]&&m[1]>=m[0]) cout<<"No solution"<<endl;
	else if(diff1<0&&diff2>0){
		a=diff2;
		c=-diff1+a;
		for(auto M:m) if(M>=c){
			cout<<"No solution"<<endl;
			return 0;
		}
		b=(m[0]-a+c)%c;
		cout<<a<<' '<<b<<' '<<c<<endl;
	}
	else if(diff1>0&&diff2<0){
		a=diff1;
		c=-diff2+a;
		for(auto M:m) if(M>=c){
			cout<<"No solution"<<endl;
			return 0;
		}
		b=(m[0]-a+c)%c;
		cout<<a<<' '<<b<<' '<<c<<endl;
	}
	else cout<<"No solution"<<endl;
}