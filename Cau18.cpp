#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n=0; cout << "Nhap n? \n"; cin >> n;
int X=0; cout <<"Nhap X? \n"; cin >> X;
double s=1; double A=1; double C=1 // A là tử , C là mẫu S=1 do từ sô 1 trở đi
;
for( int i=1; i<=n ; i++){
    A *=(2 * i - 1) * (2 * i) ; //
    C*= X * X;
s +=  C/A;
}
cout << "Gia tri cua s ("<< n << ")"<< s << endl;
return 0 ;
}

