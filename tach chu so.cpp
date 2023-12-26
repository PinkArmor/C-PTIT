#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		vector<char> v;
		sort(s.begin(), s.end());
		int sum = 0;
		for(int i=0; i<s.size(); i++){
			if(isalpha(s[i])) v.push_back(s[i]);
			else {
				int m = s[i]-'0';
				sum += m;
			}
		}
		for(int i=0; i<v.size(); i++){
			cout << v[i];
		}
		cout << sum;
		cout << endl;
	}
}
