#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	sort(a, a+n, [](string x, string y)->bool{
	     string xy = x+y;
	     string yx = y+x;
	     return xy > yx;
	});
	for(string x:a) cout << x ;
}
