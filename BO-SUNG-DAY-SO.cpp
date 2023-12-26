#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if(a[n-1] == n) {
		cout << "Excellent!" <<  endl;
		return  0;
	}
	int ans = 1;
	for(int i = 1; i <= a[n-1]; i++) {
		ans = 1;
		for(int j = 0; j < n; j++) {
			if(a[j] == i) {
				ans = 0;
				break;
			}
		}
		if(ans) cout << i << endl;
	}
	return 0;
}
