#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;  

    int x1, y1;
    cin >> x1 >> y1; 


    if ( abs(x - x1)<= 1 and abs(y - y1)<= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
