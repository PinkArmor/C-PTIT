#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int num=0;
	int m=n;
	while(n){
		num = num*10 + n%10;
		n/=10;
	}
	if(num ==m ) return 1;
	return 0;
}
int main(){
	int t; cin >>t;
	while(t--){
		int n; cin >>n;
		if(check(n)==1){
			cout << "YES" << endl;
		}
		else cout << "NO\n";
	}
}
