#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; 
	cin.ignore(1);
	while(t--){
		string s; 
		getline(cin,s);
		for(int i=0; i<s.size(); i++){
			if(!isdigit(s[i])){
				s[i] = ' ';
			}
		}
		stringstream ss(s);
		string tmp;
		long long sum=0;
		while(ss>>tmp){
			sum += stoll(tmp);
		}
	    cout << sum << endl;
	}
}
