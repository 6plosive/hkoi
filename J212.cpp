#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	/*int n,p;
	cin>>n>>p;
	vector<vector<char>> grid(n,vector<char>(n,'W'));
	for(int i=0;i<p;i++){
		char color;
		int line;
		cin>>color>>line;
		if(color=='R'){
			for(int j=line-1;j<n;j++){
				grid[j][j]='R';
			}
		}else if(color=='G'){
			for(int j=0;j<n;j++){
				grid[line-1][j]='G';
			}
		}else if(color=='B'){
			for(int j=0;j<n;j++){
				grid[j][n-line]='B';
			}
		}
	}*/
	/*for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<grid[j][i]<<' ';
		}
		cout<<endl;
	}*/
	/*int q;
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<grid[y-1][x-1]<<endl;
	}*/
	/*int n,p;
	cin>>n>>p;
	vector<pair<char,int>> instructions(p);
	for(pair<char,int>& instruction:instructions){
		cin>>instruction.first>>instruction.second;
	}*/
	/*int q,x,y,second;
	char first;
	cin>>q;
	while(q--){
		cin>>x>>y;
		bool notwhite=false;
		for(int i=p-1;i>=0;i--){
			//cout<<instructions[i].first<<instructions[i].second<<endl;
			first=instructions[i].first;
			second=instructions[i].second;
			
			if(first=='R'){
				if(x-y+1==second){
					cout<<'R'<<endl;
					didinstructions.push_back({first,second});
					notwhite=true;
					break;
				}
			}else if(first=='G'){
				if(y==second){
					cout<<'G'<<endl;
					didinstructions.push_back({first,second});
					notwhite=true;
					break;
				}
			}else if(first=='B'){
				if(x==(n-second+1)){
					cout<<'B'<<endl;
					didinstructions.push_back({first,second});
					notwhite=true;
					break;
				}
			}
		}
		if(!notwhite) cout<<'W'<<endl;
	}*/
	/*int q,second;
	char first;
	cin>>q;
	vector<int[2]> pos(q);
	vector<char> decision(q);
	for(int i=0;i<q;i++) cin>>pos[i][0]>>pos[i][1];
	while(p--){
		first=instructions[p].first;
		second=instructions[p].second;
		if(first=='R'){
			for(int i=0;i<q;i++){
				if(decision[i]!=0) continue;//already passed
				if(pos[i][0]-pos[i][1]+1==second){
					decision[i]='R';
				}
			}
		}else if(first=='G'){
			for(int i=0;i<q;i++){
				if(decision[i]!=0) continue;//already passed
				if(pos[i][1]==second){
					decision[i]='G';
				}
			}
		}else if(first=='B'){
			for(int i=0;i<q;i++){
				if(decision[i]!=0) continue;//already passed
				if(pos[i][0]==(n-second+1)){
					decision[i]='B';
				}
			}
		}
	}
	for(int i=0;i<q;i++){
		if(decision[i]==0) cout<<'W'<<endl;
		else cout<<decision[i]<<endl;
	}*/
	int n,p;
	cin>>n>>p;
	vector<int> rl(n+1);
	vector<int> bl(n+1);
	vector<int> gl(n+1);
	for(int i=1;i<=p;i++){
		char a;
		int b;
		cin>>a>>b;
		if(a=='R') rl[b]=i;
		else if(a=='G') gl[b]=i;
		else if(a=='B') bl[b]=i;
	}
	int q;
	cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		int r=rl[x-y+1],g=gl[y],b=bl[n-x+1];
		//cout<<r<<g<<b<<x<<y;
		if(r>g&&r>b) cout<<'R'<<endl;
		else if(g>r&&g>b) cout<<'G'<<endl;
		else if(b>r&&b>g) cout<<'B'<<endl;
		else cout<<'W'<<endl;
	}
}