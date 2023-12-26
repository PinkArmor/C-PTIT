#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t; cin >> t;
	map<string,int> mp;
	cin.ignore(1);
	while(t--){
		string s; 
		getline(cin,s);
		thuong(s);
		vector<string> v;
		string res ="";
		stringstream ss(s);
		string tmp;
		
		while(ss >> tmp){
			v.push_back(tmp);
		}
		int n=v.size();
		for(int i=n-1; i<n; i++){
			v[i][0] = toupper(v[i][0]);
		}
		res +=v[n-1];
		for(int i=0; i<n-1; i++){
			 res +=v[i][0];
		}
		if(mp[res] == 0){
			cout << res << "@ptit.edu.vn";
		}
		else {
			cout << res << mp[res]+1 << "@ptit.edu.vn";
		}
		mp[res]++;
		cout << endl;
	} 
}
