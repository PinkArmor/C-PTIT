#include <bits/stdc++.h>
using namespace std;
struct mh{
	int id;
	string ten, nhom;
	double mua, ban;
	double loi;
};
void nhap(mh a[], int n){
	for(int i=0; i<n; i++){
		a[i].id=i+1;
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].loi = a[i].ban - a[i].mua;
	}
}
bool cmp(mh a, mh b){
	return a.loi > b.loi;
}
int main(){
	mh a[100];
	int n; cin >> n;
	nhap(a,n);
	sort(a,a+n,cmp);
	for(int i=0; i<n; i++){
		a[i].loi= a[i].ban-a[i].mua;
		cout<<a[i].id<<" "<<a[i].ten<<" "<<a[i].nhom<<" ";
		cout<<fixed<<setprecision(2)<<a[i].loi<<endl;
	}
}


