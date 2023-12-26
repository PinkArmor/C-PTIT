#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b){
	if(a+b < b+a) return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >>n;
		vector<string> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end(), check);
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout << v[i];
		}
		cout << endl;
	}
}
