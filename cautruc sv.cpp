#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, lop, date;
	float diem;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.ten);
	cin >> a.lop;
	cin >> a.date;
	cin >> a.diem;
}
void inThongTinSV(SinhVien &a){
	if(a.date[1]=='/') a.date.insert(0,1,'0');
	if(a.date[4]=='/') a.date.insert(3,1,'0');
	cout <<"N20DCCN001 ";
	cout << a.ten << " " << a.lop << " " << a.date << " ";
	cout << fixed << setprecision(2) << a.diem;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
