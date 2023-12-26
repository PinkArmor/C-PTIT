#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s; 
		cin >> s;
		int cnt=0;
		string res = ""; // xau rong
		int n = s.size();
		for(int i=n-1; i>=0; i--){
			res += s[i];
			++cnt;
			if(i!=0 && cnt%3==0){
				res+=",";
			}
		}
		reverse(res.begin(), res.end());
		cout << res << endl;
	}
}
