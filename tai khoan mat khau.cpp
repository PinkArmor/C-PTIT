#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	int t; cin >> t;
	cin.ignore(1);
	map<string,int> mp;
	while(t--){
		string s;
		getline(cin,s);
		thuong(s);
		stringstream ss(s);
	    vector<string> v;
	    string tmp;
	    while(ss>>tmp){
	    	v.push_back(tmp);
		}
		string email = v[v.size()-2];
		for(int i=0; i<v.size()-2; i++){
			email += v[i][0];
		}
		mp[email]++;
	    if(mp[email]==1){
	    	cout << email << "edu.ptit.vn\n";
		}
		else {
			cout << email << mp[email] << "edu.ptit.vn\n";
		}
		string mk = v[v.size()-1];
		stringstream ss1(mk);
		string password = "";
		string tmp1;
		while(getline(ss1, tmp1, '/')){
			password += to_string(stoi(tmp1));
		}
		
		cout << password << endl;
	}
}
