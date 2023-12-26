#include <bits/stdc++.h>
using namespace std;
void thuong(string &s){
	for(int i=0; i<s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	string s;
	cin >> s;
	thuong(s);
	for(int i=0; i<s.size(); i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| s[i]=='y'){
			continue;
		}
		cout << "." << s[i];
	}
	
}
