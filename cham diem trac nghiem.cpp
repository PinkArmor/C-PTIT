#include <bits/stdc++.h>
using namespace std;
char a101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char a102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int cnt=0;
		double diem=0;
		char a[15];
		for(int i=0; i<15; i++){
			cin >> a[i];
		}
		if(n==101){
			for(int i=0; i<15; i++){
				if(a[i]==a101[i]) ++cnt;
			}
			diem = 1.0*cnt * 10/15;
			cout<<fixed<<setprecision(2)<<diem<<endl;
		}
		if(n==102){
			for(int i=0; i<15; i++){
				if(a[i]==a102[i]) ++cnt;
			}
			diem = 1.0*cnt * 10/15;
			cout<<fixed<<setprecision(2)<<diem<<endl;
		}
	}
}
