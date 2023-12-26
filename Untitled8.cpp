#include <iostream>
#include <string>

std::string st[100000];
int n;

void nhap()
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> st[i];
}

void tienHanh()
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            dem += st[i].find(st[j]) != std::string::npos;
            dem += st[j].find(st[i]) != std::string::npos;
        }
    std::cout << dem;
}

int main()
{
    nhap();
    tienHanh();
}
