#include <bits/stdc++.h>
using namespace std;
int cnt[100001]={};
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s; 
		getline(cin,s);
	    for(int i=0; i<s.size(); i++){
	    	cnt[s[i]]++;
		}
		for(int i=0; i<s.size(); i++){
			if(cnt[s[i]] !=0){
				cout << s[i] << cnt[s[i]];
				cnt[s[i]] =0;
			}
		}
		cout << endl;
	}
}
