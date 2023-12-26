#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore(1);
	
	while(t--){
		string s1; 
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		string tmp1;
		string tmp2;
		set<string> mp1;
	    set<string> mp2;
		while(ss1 >> tmp1){
			mp1.insert(tmp1);
		}
		while(ss2 >> tmp2){
			mp2.insert(tmp2);
		}
		for(auto x:mp1){
		    if(mp2.find(x) != mp2.end()){
		    	continue;
			}
			cout << x << " ";
		}
		
		cout << endl;
	}
}
