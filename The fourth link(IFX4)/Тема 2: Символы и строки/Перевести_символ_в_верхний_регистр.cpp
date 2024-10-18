#include <iostream>
using namespace std;

char TOUPPER(char j){
    return toupper(j);
}

int main() {
    char j;
    cin >> j;

    cout << TOUPPER(j);
}