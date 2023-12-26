#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten, sex, date, add, thue, contract;
};
void nhap(NhanVien &a){
	cin.ignore(); // xoa dau enter khi nhap contract ng tiep theo
	getline(cin,a.ten);
	cin >> a.sex >> a.date;
	cin.ignore(); // xoa dau enter khi lenh tren
	getline(cin,a.add);
	cin >> a.thue;
	cin >> a.contract;
}
void inds(NhanVien a[], int n){
	for(int i=0; i<n; i++){
		int k=i+1, cnt=0;
		while(k!=0){
			++cnt;
			k/=10;
		}
		if(cnt==1) cout << "0000";
		else cout << "000";
		cout << i+1 << " ";
		cout << a[i].ten << " " << a[i].sex << " " << a[i].date<< " " << a[i].add << " "<< a[i].thue<< " " << a[i].contract << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
