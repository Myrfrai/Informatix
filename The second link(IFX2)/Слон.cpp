#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int x1, y1;
    cin >> x1 >> y1;

    bool flag = false;


for (int i = 1; i <= 8; i++ ){
    if (x+i == x1 and y+i == y1){
        cout << "YES";
        flag = true;
        break;
    }
    
    else if (x-i == x1 and y-i == y1){
        cout << "YES";
        flag = true;
        break;
    } //first diagonal
    
    else if (x-i == x1 and y+i == y1){
        cout << "YES";
        flag = true;
        break;
    }
    
    else if (x+i == x1 and y-i == y1){
        cout << "YES";
        flag = true;
        break;
    }    //second diagonal

    else{
        continue;
    }
}


    if (!flag ){
        cout << "NO";
    }
}