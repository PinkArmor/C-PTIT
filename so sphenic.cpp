#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int sphenic(int n){
	int res =0;
	for(int i=2; i<=sqrt(n); i++){
			int cnt=0;
			if(n%i==0){
				while(n%i==0){
					++cnt;
					n/=i;
				}
			}
			if(cnt >=2) return 0;
			if(cnt==1) ++res;
		}
		if(n>1) ++res;
		return res==3;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(sphenic(n)) cout << "1\n";
		else cout << "0\n";
	}
}
