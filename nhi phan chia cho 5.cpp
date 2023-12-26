#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		long long sum = 0;
		for(int i=n-1; i>=0; i--){
			sum += 1ll*(s[i]-'0') * pow(2,n-i-1);
		}
		if(sum%5==0){
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
}
