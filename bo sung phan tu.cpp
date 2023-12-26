#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set <int> se;
		int cnt=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int it=*se.begin(); it<=*se.rbegin(); it++){
		    if(se.count(it)==0) cout << it << " ";
		}
		cout << endl;
	}
}
