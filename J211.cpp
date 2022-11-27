#include <bits/stdc++.h>
using namespace std;
#define dbg(d) cout<<#d<<'='<<d<<endl

int cyan, magenta, yellow, black, red, green, blue;

int main(){
	cin>>cyan>>magenta>>yellow>>black>>red>>green>>blue;
	int n,lowest=2000000000;
	string color;
	cin>>n>>color;
	if(color=="cyan"){ cout<<n*cyan<<endl; return 0;}
	else if(color=="magenta"){ cout<<n*magenta<<endl; return 0;}
	else if(color=="yellow"){ cout<<n*yellow<<endl; return 0;}
	else if(color=="red"){
		//dbg(avg);
		float avg=(yellow+magenta)/2;
		if(avg<red){//avg less than red
			if(n%2==0) lowest=(lowest<(yellow+magenta)*(n/2))?lowest:(yellow+magenta)*(n/2);//even,no need extra
			else{//odd
				lowest=(lowest<(yellow+magenta)*(n+1)/2)?lowest:(yellow+magenta)*(n+1)/2;//buy 1 extra yellow magenta combo
				lowest=(lowest<(yellow+magenta)*(n-1)/2+red)?lowest:(yellow+magenta)*(n-1)/2+red;
			}
		}else{
			lowest=(lowest<red*n)?lowest:red*n;
		}
	}else if(color=="green"){
		float avg=(cyan+yellow)/2;
		//dbg(avg);
		if(avg<green){//avg less than green
			if(n%2==0) lowest=(lowest<(cyan+yellow)*n/2)?lowest:(cyan+yellow)*n/2;//even,no need extra
			else{//odd
				lowest=(lowest<(cyan+yellow)*(n+1)/2)?lowest:(cyan+yellow)*(n+1)/2;//buy 1 extra yellow magenta combo
				lowest=(lowest<(cyan+yellow)*(n-1)/2+green)?lowest:(cyan+yellow)*(n-1)/2+green;
			}
		}else{
			lowest=(lowest<green*n)?lowest:green*n;
		}
	}else if(color=="blue"){
		float avg=(cyan+magenta)/2;
		//dbg(avg);
		if(avg<blue){//avg less than blue
			if(n%2==0) lowest=(lowest<(cyan+magenta)*n/2)?lowest:(cyan+magenta)*n/2;//even,no need extra
			else{//odd
				lowest=(lowest<(cyan+magenta)*(n+1)/2)?lowest:(cyan+magenta)*(n+1)/2;//buy 1 extra yellow magenta combo
				lowest=(lowest<(cyan+magenta)*(n-1)/2+blue)?lowest:(cyan+magenta)*(n-1)/2+blue;
			}
		}else{
			lowest=(lowest<blue*n)?lowest:blue*n;
		}
	}else if(color=="black"){
		int mixedamount=(n%3==0)?n/3:n/3+1;
		//dbg(mixedamount);
		lowest=(lowest<(cyan+magenta+yellow)*mixedamount)?lowest:(cyan+magenta+yellow)*mixedamount;//n mod 3 =0 or extra cheaper
		lowest=(lowest<(red+green+blue)*mixedamount)?lowest:(red+green+blue)*mixedamount;//n mod 3 =0 or extra cheaper
		lowest=(lowest<(cyan+red+red)*mixedamount)?lowest:(cyan+red+red)*mixedamount;//n mod 3 =0 or extra cheaper
		lowest=(lowest<(magenta+green+green)*mixedamount)?lowest:(magenta+green+green)*mixedamount;//n mod 3 =0 or extra cheaper
		lowest=(lowest<(blue+blue+yellow)*mixedamount)?lowest:(blue+blue+yellow)*mixedamount;//n mod 3 =0 or extra cheaper
		lowest=(lowest<black*n)?lowest:black*n;//direct
		if(n%3!=0){
			lowest=(lowest<(cyan+magenta+yellow)*(n-(n%3))/3+((n%3)*black))?lowest:(cyan+magenta+yellow)*(n-(n%3))/3+((n%3)*black);//n mod 3 =0 or extra cheaper
			lowest=(lowest<(red+green+blue)*(n-(n%3))/3+((n%3)*black))?lowest:(red+green+blue)*(n-(n%3))/3+((n%3)*black);//n mod 3 =0 or extra cheaper
			lowest=(lowest<(cyan+red+red)*(n-(n%3))/3+((n%3)*black))?lowest:(cyan+red+red)*(n-(n%3))/3+((n%3)*black);//n mod 3 =0 or extra cheaper
			lowest=(lowest<(magenta+green+green)*(n-(n%3))/3+((n%3)*black))?lowest:(magenta+green+green)*(n-(n%3))/3+((n%3)*black);//n mod 3 =0 or extra cheaper
			lowest=(lowest<(blue+blue+yellow)*(n-(n%3))/3+((n%3)*black))?lowest:(blue+blue+yellow)*(n-(n%3))/3+((n%3)*black);//n mod 3 =0 or extra cheaper
		}
	}
	cout<<lowest<<endl;
}