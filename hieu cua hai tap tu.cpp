#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s1; 
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		stringstream ss1(s1);
		stringstream ss2(s2);
		string tmp;
		set<string> se1;
		set<string> se2;
		while(ss1>>tmp){
			se1.insert(tmp);
		}
		while(ss2>>tmp){
			se2.insert(tmp);
		}
		for(auto x:se1){
			if(se2.count(x)!=0){
				continue;
			}
			cout << x << " ";
		}
		cout << endl;
	}
}
