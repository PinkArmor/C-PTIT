#include <bits/stdc++.h>
using namespace std;
int check(int n){
	while(n){
		int x = n%10;
		if(x != 8 && x != 6 && x != 0){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t; cin >>t;
	while(t--){
		int n; cin >> n;
        if(check(n)==1){
        	cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
