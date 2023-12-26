#include <bits/stdc++.h>
using namespace std;
void check(string &s){
	 for(int i=0; i<s.size(); i++){
	 	s[i] = tolower(s[i]);
	 }
}
int main(){
	
		string s;
		getline(cin,s);
		check(s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v.push_back(tmp);
		}

		if (!v.empty()) {
		  cout << v[v.size() - 1];
		} else {
		  cout << "";
		}

		for(int i=0; i<v.size()-1; i++){
			cout << v[i];
		}
		cout << "@ptit.edu.vn";
		cout << endl;
	
}

