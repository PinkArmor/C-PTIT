#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int a=0, b=0;
	while(n){
		int num = n%10;
		if(num % 2 ==0){
			++a;
		}
		if(num % 2 !=0){
			++b;
		}
		n /=10;
	}
	if(a==b) return 1;
	else return 0;
}
int main(){
	int n; cin >> n;
	int a=0;
	for(int i=pow(10,n-1); i <pow(10,n); i++){
		if(check(i)==1){
			cout << i << " ";
			++a;
		}
		if(a%10==0) cout << endl;
	}
}
