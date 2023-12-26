#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int ans=0;
	int a[n+1][4];
	for(int i=1; i<=n; i++){
		int cnt=0;
		for(int j=1; j<=3; j++){
			cin >> a[i][j];
			if(a[i][j]) ++cnt;
		}
		if(cnt >1 ) ++ans;
	}
		cout << ans;
}
