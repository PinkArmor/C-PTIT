#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool binarysearch(int a[], int n, int x){
	int l =0 , r =n-1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			return true;
		}
		else if(a[mid] < x){
			l = mid +1;
		}
		else {
			r = mid -1;
		}
	}
	return false;
}
int main(){
	int t; cin >> t; 
	while(t--){
		int n,x; cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		if(binarysearch(a,n,x)) cout << "1\n";
		else cout << "-1\n";
	}
}
