#include <iostream>
using namespace std;

int main(){
    int n, n1, n2;
    n2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> n1;
        n2 += n1;
    }

    cout << n2 << endl; 

    return 0;
}
