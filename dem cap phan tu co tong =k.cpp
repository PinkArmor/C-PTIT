#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		vector<int> v(n);
		map<long,long> mp;
		int sum=0;
	    for(int i=0; i<n; i++){
	    	cin>>v[i];
	    	mp[v[i]]++;
		}
		for(int i=0; i<n; i++){
			if(mp[k-v[i]] > 0){
				if(v[i]==k-v[i]){
					sum += mp[k-v[i]]-1;
					cout<<sum<<endl;
				} 
				else {
					sum += mp[k-v[i]];
					cout<<sum<<endl;
				}
			}
		}
		cout<<sum/2<<endl;
	}
}
