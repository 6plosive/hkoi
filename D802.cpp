#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a;
	cin>>n;
	cin>>a;
	vector<int> unsorted(n);
	for(auto& e:unsorted) cin>>e;
	if(a==1){
		int count=0;
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(unsorted[j]<unsorted[j+1]){
					count++;
					swap(unsorted[j],unsorted[j+1]);
				}
			}
		}
		cout<<count<<endl;
		sort(unsorted.begin(),unsorted.end());
		reverse(unsorted.begin(),unsorted.end());
		for(int i=0;i<n-1;i++) cout<<unsorted[i]<<' ';
		cout<<unsorted[unsorted.size()-1]<<endl;
	}else if(a==0){//very nigger
		int count=0;
		for(int i=n-2;i>=0;i--){
			for(int j=n-2;j>=n-i-2;j--){
				if(unsorted[j]>unsorted[j+1]){
					count++;
					swap(unsorted[j],unsorted[j+1]);
				}
			}
		}
		cout<<count<<endl;
		//sort(unsorted.begin(),unsorted.end());
		for(int i=0;i<n-1;i++) cout<<unsorted[i]<<' ';
		cout<<unsorted[unsorted.size()-1]<<endl;
	}
	return 0;
}
