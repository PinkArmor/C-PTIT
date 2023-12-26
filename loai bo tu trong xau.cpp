#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string s1;
	cin >> s1;
	string tmp;
	stringstream ss(s);
	while(ss >> tmp){
		if(tmp == s1){
			continue;
		}
		cout << tmp << " ";
	}
}
