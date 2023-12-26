#include <bits/stdc++.h>
using namespace std;
long long fibo[100];
int main(){
	int t; cin >> t;
	while(t--){
		fibo[0]=0;
		fibo[1]=1;
		int n; cin >>n;
		for(int i=2; i<=92; i++){
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		cout << fibo[n] << endl;
	}
}
