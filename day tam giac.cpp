#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		vector <int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end()); 
		cout << *max_element(v.begin(), v.end()) <<endl;
	}
}
