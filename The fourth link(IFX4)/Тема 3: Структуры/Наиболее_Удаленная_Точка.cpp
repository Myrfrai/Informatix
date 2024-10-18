    #include <iostream>
    #include <cmath>
    using namespace std;

    struct points{
        double x;
        double y;
    };
    

int main(){
    int n;
    cin >> n;
    double maxi = 0;
    int index = 0;

    points* a = new points[n];

    for (int i = 0; i < n; i++){
        cin >> a[i].x >> a[i].y;
        double sop = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
        if (sop > maxi){
            maxi = sop;
            index = i;
        }
    }

    cout << a[index].x << " " << a[index].y << endl;

delete [] a;    
return 0;
}