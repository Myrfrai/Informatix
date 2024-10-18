#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, fib = 0, q = 2;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    } 
    
    else if (n == 1) {
        cout << 1;
        return 0;
    }


    while (q <= n) {
        fib = a + b;
        a = b;
        b = fib;
        q++;
    }

    cout << fib;
    return 0;
}