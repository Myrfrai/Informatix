#include <iostream>
#include <string>
using namespace std;

bool Compare(string k, string j){
    if (k == j){
        return true;
    }
return false;    
}



int main(){
    string k, j;
    cin >> k >> j;

    if(Compare(k, j)){
        cout << "yes" << endl;
    }
    else cout << "no" << endl;

return 0;    
}