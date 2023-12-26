#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; 
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	map<string,int> mp;
	vector<string> v;
	while(ss>>tmp){
		mp[tmp]++;
	}
	int Min= 1e9, Max=0;
	string res1 , res2;
	for(auto it:mp){
		if(it.second >= Max){
			Max = it.second;
			res1 = it.first;
		}
		if(it.second <= Min){
			Min = it.second;
			res2 = it.first;
		}
	}
	cout << res1 << " " << Max << endl;
	cout << res2 << " " << Min << endl;
}
