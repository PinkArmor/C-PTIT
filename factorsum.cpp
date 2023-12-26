#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int sum =0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0){
			while(n%i==0){
		         sum += i;
				 n/=i;		
			}
		}
	}
	if(n>1) sum +=n;
	return sum;
}

int main(){
	int t; cin >> t;
	int sum=0;
	while(t--){
		int n; cin >> n;
		while(n!=check(n)){
			n = check(n);
			
		}
		cout << n;
	}
	
}

