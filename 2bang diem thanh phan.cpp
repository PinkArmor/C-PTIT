#include <bits/stdc++.h>
using namespace std;
struct sv{
	string msv, ten, lop;
	double d1,d2,d3;
};
void nhap(sv a[], int n){
	for(int i=0; i<n; i++){
		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop;
		cin>>a[i].d1>>a[i].d2>>a[i].d3;
	}
}
bool cmp(sv a, sv b){
	return a.ten < b.ten;
}
void sapxep(sv a[], int n){
	sort(a,a+n,cmp);
}
void in(sv a[], int n){
	for(int i=0; i<n; i++){
		cout<<i+1<<" "<<a[i].msv<<" ";
		cout<<a[i].ten<<" "<<a[i].lop<<" ";
		cout<<fixed<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
	}
}
int main(){
	int n; cin >>n;
	sv a[n];
	nhap(a,n);
	sapxep(a,n);
	in(a,n);
}
