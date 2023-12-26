#include <bits/stdc++.h>
using namespace std;
int check (string &s){
	int cnt=0;
	for(int i=0; i< s.size(); i++){
		if((s[i+1]-s[i])==1 || (s[i]-s[i+1])==1){
			++cnt;
		}
	}
	if(cnt == s.size()-1) return 1;
	else return 0;
}
int main(){
	int t; cin >>t;
	while(t--){
		string s; cin >>s;
	    if(check(s)) cout <<"YES\n";
	    else cout << "NO\n";
	}
}
