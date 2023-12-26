#include <bits/stdc++.h>
using namespace std;
int prime(int n){
	if(n==0 ||n==1){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int high(int n){
	while(n>9){
		if(n%10 >= (n/10)%10){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int low(int n){
	while(n>9){
		if(n%10 <= ((n/10)%10)){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt=0;
		int a= pow(10,n-1), b= pow(10,n);
		for(int i=a; i<=b; i++){
			if( (high(i) || low(i)) && prime(i) ){
				++cnt;
			}
		}
		cout << cnt << endl;
	}
}
