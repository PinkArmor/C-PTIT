#include <iostream>
#include <cmath>

int n, tong;

void nhap()
{
    std::cin >> n;
}

void tienHanh()
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                tong += i;
                n /= i;
            }
        }
    }
    if (n != 1)
        tong += n;
}

int main()
{
    int n;
    std::cin >> n;
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        nhap();
        tienHanh();
    }
    std::cout << tong;
}
