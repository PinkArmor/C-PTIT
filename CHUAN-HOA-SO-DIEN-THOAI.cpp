#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin, s);
		string a = "";
		if(s[0] == '+' && s[1] == '8' && s[2] == '4') {
			s[2] = '0';
			for(int i = 2; i < s.size(); i++) {
				if(s[i] <= '9' && s[i] >= '0') {
					a += s[i];
				}
			}
			cout << a << endl;
			continue;
		}
		if(s[0] == '8' && s[1] =='4') {
			s[1] = '0';
			for(int i = 1; i < s.size(); i++) {
				if(s[i] <= '9' && s[i] >= '0') {
					a += s[i];
				}
			}
			cout << a << endl;
			continue;
		}
		for(int i = 0; i < s.size(); i++) {
			if(s[i] <= '9' && s[i] >= '0') {
				a += s[i];
			}
		}
		cout << a << endl;
	}
}
