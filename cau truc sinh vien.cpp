#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ten; 
	string lop;
	string ngay;
	float diem;
		
};
void nhap(SinhVien &a){
	 getline(cin,a.ten);
	 cin >> a.lop;
	 cin >> a.ngay;
	 cin >> a.diem;
}
void in(SinhVien &a){
	 cout << "B20DCCN001" << " ";
	 if(a.ngay[1]=='/') a.ngay.insert(0,1,'0');
	 if(a.ngay[4]=='/') a.ngay.insert(3,1,'0');
	 cout << a.ten << " " << a.lop << " " << a.ngay << " ";
	 cout << fixed << setprecision(2) << a.diem;  
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

