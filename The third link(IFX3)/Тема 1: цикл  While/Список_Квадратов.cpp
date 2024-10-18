#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    a = 1;
    while(a <= n){
        int g = sqrt(a);
        if (  g * g  == a ){
            cout << a << " ";
        }
        a++;
    }
    

    return 0;
}
