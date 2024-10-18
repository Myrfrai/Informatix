#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 1, b = 1, nfib = 0, q = 2;
    cin >> n;
    bool flag = false;

    if (n == 1) {
        cout << 1;
        return 0;
    }


    while (nfib < n) {
        nfib = a + b;
        a = b;
        b = nfib;
        q++;

        if (nfib == n) {
            cout << q;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "-1"; 
    }

    return 0;
}
