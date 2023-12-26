#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, lop, date;
	float gpa;
};
void nhap(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		cin.ignore();
	    getline(cin,a[i].ten);
	    cin >> a[i].lop >> a[i].date >> a[i].gpa;
	}
}
void in(SinhVien a[], int n){
	for(int i=0; i<n; i++){
		if(a[i].date[1]=='/') a[i].date.insert(0,1,'0');
		if(a[i].date[4]=='/') a[i].date.insert(3,1,'0');
		int k=i+1 , cnt=0;
		while(k){
			++cnt;
			k/=10;
		}
		if(cnt==1) cout <<"B20DCCN00";
		else cout << "B20DCCN0";
		cout << i+1 << " " << a[i].ten << " " << a[i].lop << " " << a[i].date <<" ";
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
} 
