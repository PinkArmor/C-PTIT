#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x,ans; cin >> n >> x;
	    int a[n];
        for(int i=0; i<n; i++){
        	cin >> a[i];
		}		
		int ok = 0;
		for(int i=0; i<n; i++){
			if(x==a[i] && !ok){
				ans=i;
				ok=1;
			}
		}
		if(ok==1) cout << ans+1 << endl;
	}
}
