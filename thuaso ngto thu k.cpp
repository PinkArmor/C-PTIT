#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    bool ok = false;
    vector<long long> v;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1) v.push_back(n);

    if (k >= 1 && k <= v.size()) {
        cout << v[k - 1];
    } else {
        cout << "-1";
    }

    return 0;
}

