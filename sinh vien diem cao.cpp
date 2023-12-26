#include <bits/stdc++.h>
using namespace std;
struct sv{
	string ten;
	string ngaysinh;
	double gpa;
	void nhap(){
		getline(cin, ten);
		cin >> ngaysinh >> gpa;
	}
	void in(){
		cout << ten << endl;
		cout << ngaysinh << endl;
		cout << fixed << setprecision(2) << gpa << endl;
	}
};
bool cmp(sv x, sv y){
	if(x.gpa != y.gpa){
		return x.gpa < y.gpa;
	}
	else {
		return x.ten > y.ten; // thu tu tu dien
	}
}
int main(){
	int n; cin >> n;
	sv a[n];
	double cnt=0.0;
	for(int i=0; i<n; i++){
		cin.ignore();
		a[i].nhap();
		cnt = max(cnt, a[i].gpa);
	}
	sort(a,a+n, cmp);
	for(int i=0; i<n; i++){
		a[i].in();
	}
	/*/for(int i=0; i<n; i++){
		if(a[i].gpa== cnt){
			a[i].in();
		}
	}/*/
}
