#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s; cin >> s;
		string  m; cin >> m;
		long long r=0;
		for(int i=0; i<s.size(); i++){
			r = r*10 + (s[i]-'0');
			r%=m;
		}
		cout << r << endl;
	}
}
