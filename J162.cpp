#include <bits/stdc++.h>
using namespace std;

const vector<tuple<string, int, int>> offsetlist={{"PST",-8,0},{"MST",-7,0},{"EST",-5,0},{"GMT",0,0},{"MSK",3,0},{"IST",5,30},{"NPT",5,45},{"HKT",8,0},{"JST",9,0},{"ACDT",10,30}};

int getminute(string key){
	for(tuple<string, int, int> ele:offsetlist){
		if(get<0>(ele)==key){
			return get<1>(ele)*60+get<2>(ele);
		}
	}
}

int difftimezone(string from,string to){
	return getminute(to)-getminute(from);
}

string formatass(int n){
	string hi=to_string(n);
	if(hi.length()==1) hi='0'+hi;
	return hi;
}

void J162(){
	int in_hr,in_min;
	string from,to;
	cin>>in_hr>>in_min>>from>>to;
	in_min+=in_hr*60+48*60;
	in_min+=difftimezone(from,to);//unprocessed minute
	in_hr=in_min/60;//unprocessed hour
	in_min%=60;//processed minute
	in_hr%=24;//processed hour
	cout<<formatass(in_hr)<<' '<<formatass(in_min)<<endl;
}

int main(){
	J162();
}