#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		int cnt=0;
		for(int i=2; i<= sqrt(n); i++){
			if(n%i==0){
				while(n%i==0){
				 cnt =i;
				 n/=i; 
				}
				
			}
		}
		if(n > 1){
			cnt =n;
		}
		cout << cnt;
		cout << endl;
	}
}
