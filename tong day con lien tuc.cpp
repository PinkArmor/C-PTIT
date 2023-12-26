#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        long long sum = 0, res = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum > res)
                res = sum;
            if (sum < 0)
                sum = 0;
        }
        cout << res << endl;
    }
}
