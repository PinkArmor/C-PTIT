#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		int num = 1e9;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(int i=1; i<n; i++){
			num = min(num, v[i]-v[i-1]);
		}
		cout << num;
		cout << endl;
	}
}
