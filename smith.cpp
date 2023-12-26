#include <bits/stdc++.h>
using namespace std;
long long check(long long n){
	long long sum=0;
	while(n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main(){
	long long n; cin >> n;
	long long m=n;
	long long s=0;
	for(long long i=2; i<=sqrt(n); i++){
		if(n%i==0){
			while(n%i==0){
			    s+=1ll*i;
				n/=i;	
			}
		}
	}
	if(n>1) s+=1ll*n;
	long long b= check(m);
	cout << s;
}
