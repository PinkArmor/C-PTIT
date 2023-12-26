#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		getline (cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss>>tmp){
			v.push_back(tmp);
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
