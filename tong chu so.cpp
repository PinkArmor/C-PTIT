#include <bits/stdc++.h>
using namespace std;
int tong (int n){
	int sum =0;
	while(n){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t; cin>> t;
	while(t--){
		int n; cin >>n;
		while (n != tong(n)){
			n = tong(n);
		}
		cout << tong(n) <<endl;
	}
}
