#include <iostream>
using namespace std;

bool amogus(unsigned char k)   {
    return isdigit(k);
}


int main(){
    unsigned char k;
    cin >> k;
    if (amogus(k)){
        cout << "yes" ;
    }
    else cout << "no";

    
}