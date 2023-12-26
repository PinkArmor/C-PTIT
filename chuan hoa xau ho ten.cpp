#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
void hoa(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = toupper(s[i]);
	}
}
int main(){
	string s; 
	getline(cin,s);
	thuong(s);
	stringstream ss(s);
	vector<string> v;
	string tmp;
	string res = "";
	while(ss>> tmp){
		v.push_back(tmp);
	}
	for(int i=0; i<v.size()-1; i++){
		v[i][0] = toupper(v[i][0]);
		cout << v[i];
		if(i != v.size()-2) cout << " ";
	}
	cout << ",";
	hoa(v[v.size()-1]);
	cout << " " << v[v.size()-1];
	
}
