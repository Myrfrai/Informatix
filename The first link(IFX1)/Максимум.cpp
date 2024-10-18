#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    int arr[2];
    for (int i = 0; i < 2; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+2);

    cout << arr[1];
}

