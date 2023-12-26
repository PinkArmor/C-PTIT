#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a,n; cin >> a >> n;
		int ans;
		for(int i=0; i<n; i++){
			ans = i*a%n;
			if(ans==1){
				cout << i;
				break;
			}
		}
		
		cout << endl;
	}
}
