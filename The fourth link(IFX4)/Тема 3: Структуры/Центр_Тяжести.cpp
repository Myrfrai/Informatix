#include <iostream>
#include <iomanip>
using namespace std;

struct point{
    double x, y;
};

int main(){
    int n;
    double sx = 0, sy = 0;
    cin >> n;
    point* a = new point[n];

for (int i = 0; i < n; i++){
    cin >> a[i].x >> a[i].y;
    sx += a[i].x;
    sy += a[i].y;

}    

    cout << fixed << setprecision(15) <<  sx / n << " " << sy / n;


delete[] a;
return 0;
}
