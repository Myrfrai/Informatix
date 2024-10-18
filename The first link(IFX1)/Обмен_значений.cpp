#include <iostream>
using namespace std;

int main(){
    int a, b, n;

    cin >> a >> b;
    
    n = b; 
    b = a; 
    a = n; 

    cout << a << " " << b;
    
}