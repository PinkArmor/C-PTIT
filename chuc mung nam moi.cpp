#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	cin.ignore(1);
	set<string> se;
	while(n--){
		string s;
		getline(cin,s);
		se.insert(s);
	}
	cout << se.size();
}
