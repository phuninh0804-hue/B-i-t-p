#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n=0; cout << "Nhap n? \n"; cin >> n;
int X=0; cout <<"Nhap X? \n"; cin >> X;
double s=0; double A=1; double C=1 ;// C là tử , A là mẫu
;
for( int i=1; i<=n ; i++){
    A *= i ; //
    C*= X;
s +=  C/A;
}
cout << "Gia tri cua s ("<< n << ")"<< s << endl;
return 0 ;
}



