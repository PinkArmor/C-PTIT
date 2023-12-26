#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	int sum=0;
	int res, ind;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<k; i++) sum += a[i];
	res = sum;
	for(int i=1; i<= n-k; i++){
		sum = sum - a[i-1] + a[i+k-1];
		if(sum>res){
			res = sum;
			ind = i;
		}
	}
	cout << res << endl;
	for(int i=0; i<k; i++){
		cout << a[i+ind] << " ";
	}
}
