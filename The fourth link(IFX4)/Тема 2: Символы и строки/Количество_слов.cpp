#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int count;
    count = 1;
    getline(cin, a);

    for (int i = 0; i < a.size(); i++){
        if (a[i] == ' '){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}