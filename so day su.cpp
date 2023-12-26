#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; 
		cin >> s;
		set<char> se;
		if(s[0]=='0'){
			cout << "INVALID\n";
		}
		else{
		for(int i=0; i<s.size(); i++){
			se.insert(s[i]);
		}
		int ok=1;
		for(auto it:se){
			if(!isdigit(it)){
				ok=0;
				break;
			}
		}
		if(se.size()==10 && ok==1){
			cout <<"YES\n";
		}
		if(se.size()!=10 && ok==1){
			cout << "NO\n";
		}
		if(ok==0 ){
			cout << "INVALID\n";
		}
	}
	}
}
