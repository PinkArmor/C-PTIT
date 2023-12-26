#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; 
	getline(cin,s);
	set<char> se;
	for(int i=0; i< s.size(); i++){
		se.insert(s[i]);
	}
	if(se.size()==26){
		cout << "yes";
	}
	else cout << "no";
}
