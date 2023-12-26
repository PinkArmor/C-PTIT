#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<string> v;
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(string x:v){
		cout << x << " ";
	}
	cout << endl;
	sort(v.begin(), v.end(), [](string x, string y)->bool{
	     if(x.size() != y.size())
		   return x.size() < y.size();
		else 
		   return x < y; 
	});
	for(string x:v){
		cout << x << " ";
	}
	cout << endl;
}
