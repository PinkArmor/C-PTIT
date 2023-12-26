#include <iostream>
using namespace std;

int a, b;
string st;

void timMin() {
    st = "1";
    for (int i = 0; i < a - 1; i++) {
        st.push_back('0');
    }
    int i = st.length() - 1;
    int temp = b - 1;
    while (temp > 9) {
        temp -= '9' - st[i];
        st[i] = '9';
        i--;
    }
    st[i] = st[i] + temp;
    cout << st;
}

void timMax() {
        for (int i = 0; i < a; i++) {
        st.push_back('9');
    }
    int i = st.length() - 1;
    int temp = 9*a-b ;
    while (temp > 9) {
        temp -= st[i] - '0';
        st[i] = '0';
        i--;
    }
    st[i] = st[i] - temp;
    cout << st;
}

int main() {
    cin >> a >> b;
    if (9 * a < b || b == 0) {
        cout << "-1 -1";
    } 
	else {
        timMin();
        cout << " ";
        st = "";
        timMax();
    }
}
