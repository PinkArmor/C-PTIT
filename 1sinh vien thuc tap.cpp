#include <bits/stdc++.h>
using namespace std;
struct sv{
	int id;
	string msv,ten,lop,mail,dn;
};
bool cmp(sv a, sv b){
	return a.ten < b.ten;
}
void sapxep(sv a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	int n; cin >>n;
	sv a[n];
	int m; string tmp; 
	for(int i=0; i<n; i++){
		a[i].id = i+1;
		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop>>a[i].mail>>a[i].dn;
	}
	cin >> m;
	while(m--){
		cin >> tmp;
		sapxep(a,n);
	for(int i=0; i<n; i++){
		if(a[i].dn==tmp){
			cout<<a[i].id<<" "<<a[i].msv<<" "<<a[i].ten<<" ";
			cout<<a[i].lop<<" "<<a[i].mail<<" "<<a[i].dn<<endl;
		}
	  }
	  cout << endl;
	}
}
