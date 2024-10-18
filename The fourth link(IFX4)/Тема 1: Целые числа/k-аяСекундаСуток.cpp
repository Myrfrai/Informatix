#include <iostream>
using namespace std;

int main(){
int h,m,s,chislo;

cin >> chislo;
h = chislo / 3600;
chislo = chislo - (h * 3600);

m = chislo / 60;
chislo = chislo - (m * 60);


cout << "It is " << h << " hours " << m << " minutes.";
}
