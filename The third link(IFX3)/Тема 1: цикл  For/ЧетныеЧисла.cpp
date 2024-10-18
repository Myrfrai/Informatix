#include <iostream>
using namespace std;

int main(){
    int n, n1;
    cin >> n >> n1;

    for (int i = n; i <= n1; i++){
        if ( i % 2 == 0){
            cout << i << " ";
        }
    }



}