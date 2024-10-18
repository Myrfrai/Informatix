#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m <= n) {
        cout << 1;
    } 
    
    else {
      
        cout << (m + n - 1) / n;
    }

    return 0;
}
