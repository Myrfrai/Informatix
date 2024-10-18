#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int maloap = (k % n == 0) ? 0 : n - (k % n);

    cout << maloap ;

}
