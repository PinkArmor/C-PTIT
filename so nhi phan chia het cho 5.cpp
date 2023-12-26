#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s; cin >> s;
		int lt=1;
		int r= (s[s.size()-1] - '0') %5;
		for(int i=s.size()-2; i>=0; i--){
			lt*=2;
			lt%=5;
			r=r + (s[i]-'0')*lt;
			r%=5;
		}
		if(r==0) cout << "Yes\n";
		else cout << "No\n";
	}
}
