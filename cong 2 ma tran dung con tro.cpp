#include <bits/stdc++.h>
using namespace std;
int main(){
    int **a, **b;
    int size=2;
    a = new int*[size];
    b = new int*[size];
    for(int i=0; i<size; i++){
        a[i] = new int [size];
        for(int j=0; j<size; j++){
           cin >> a[i][j];
        }
    }
    for(int i=0; i<size; i++){
        b[i] = new int [size];
        for(int j=0; j<size; j++){
             cin >> b[i][j];
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    for(int i=0; i<size; i++){
        delete [] a[i];
        delete [] b[i];
     }
     delete a;
     delete b;
     for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << a[i][j] + b[i][j];
        }
        cout << endl;
    }
}
