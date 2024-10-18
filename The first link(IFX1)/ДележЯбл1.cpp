#include <iostream>
using namespace std;

int main(){
    int a, b;

    cin >> a >> b;
    
    int n = b%a;
    int n1 = b - n;
    int n2 = n1 / a;

    cout << n2;
    
}