#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b ;

    for (int i = a; i <= b; i++){
        int g = sqrt(i);
        if (  g * g  == i ){
            cout << i << " ";
        }
        
    }



}   