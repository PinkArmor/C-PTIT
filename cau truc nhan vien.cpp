#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	  string ten, sex, date, adr, thue, contract;
};
void nhap(NhanVien &a){
	 getline(cin,a.ten);
	 cin >> a.sex >> a.date;
	 cin.ignore();
	 getline(cin, a.adr);
	 cin >> a.thue >> a.contract;
}
void in(NhanVien &a){
	cout << "00001 ";
	cout << a.ten << " " << a.sex << " " <<a.date << " " << a.adr << " " << a.thue<< " " << a.contract;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
