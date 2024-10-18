#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    
    int n1 = a / 100;
    int n2 =a % 100 /10 ;
    int n3 = a % 10;
    cout << n1 + n2 + n3;
}
