#include <iostream>
using namespace std;

int main(){
    char k;
    cin >> k;

    if ('A' <= k and k <= 'Z'){ 
        k = tolower(k);
    }

    else if('a' <= k && k <= 'z') { 
        k = toupper(k);
    }

    cout << k << endl;
}