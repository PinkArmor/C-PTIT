#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int n;
map<int, int> dem;
vector<int> a;

void nhap()
{
    cin >> n;
}

void tienHanh()
{
    a.clear();
    for (int i = 2; i <= sqrt(n) && n != 1; i++)
    {
        if (n % i == 0)
        {
            dem[i] = 0;
            a.push_back(i);
            while (n % i == 0)
            {
                dem[i]++;
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        a.push_back(n);
        dem[n] = 1;
    }
}

void xuat()
{
    if (n % 2)
        cout << "0\n";
    else
    {
        tienHanh();
        int ketQua = 1;
        for (int k : a)
        {
            ketQua *= dem[k] + 1;
        }
        ketQua *= float(dem[2])/ float (dem[2] + 1);
        cout << ketQua << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap();
        xuat();
    }
}
