#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; int x; 
	cin >> s >> x;
	int cnt=0;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='0'){
			++cnt;
		}
		else break; // s[i]=1;
		if(cnt >= x) break;
		
	}
	if(cnt >=x ) cout << "YES\n";
	else cout << "NO\n";
}

