#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >>n;
	long long sum =0;
	long long a=1;
	for(int i=1; i<=n; i++){
		a = 1ll*a*i;
		sum += 1ll*a;
	}
	cout << sum;
}
