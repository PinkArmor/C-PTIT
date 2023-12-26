#include <iostream>

int n, m;
char a[20][20];
bool ok[20][20];

void nhap()
{
    std::cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> a[i][j];
}

void fill()
{
    for (int i = 0; i < m; i++)
        std::fill(ok[i], ok[i] + n, false);
}

bool kt(int i, int j)
{
    if (ok[i][j] || a[i][j] == 'X') 
        return true;
    ok[i][j] = true;
    if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
        return false;
    return kt(i - 1, j) && kt(i, j - 1) && kt(i + 1, j) && kt(i, j + 1);
}

void tienHanh()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 'O')
            {
                fill();
                if (kt(i, j)) a[i][j] = 'X';
            }
}

void xuat()
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cout << a[i][j] << " \n"[j == n - 1];
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        nhap();
        tienHanh();
        xuat();
    }
}
