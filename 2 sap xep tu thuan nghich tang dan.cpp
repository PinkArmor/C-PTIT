#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	string t = s;
	reverse(t.begin(), t.end());
	return s == t;
}
int main(){
	vector<string> v;
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	set<string> se;
	while(ss>> tmp){
		if(se.count(tmp) == 0 && check(tmp)){
			v.push_back(tmp);
			se.insert(tmp);
		}
	}
	stable_sort(v.begin(), v.end(), [](string x, string y)->bool{
	    return x.size() < y.size();
	});
	for(string x:v){
		cout << x << " ";
	}
}
