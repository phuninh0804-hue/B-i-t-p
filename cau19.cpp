#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n =0 ; cout << " Nhap n? \n" ; cin >> n;
long double X =0 ; cout << " Nhap X?\n" ; cin >> X;
double S=1 ; double A ; double C;
; // A la tu C la mau :v
for( int i=0; i<= n ; i++){
    A = pow( X , 2*i +1);
    C =  tgamma( 2*i +2);
    S +=   (A/C);
}
cout << " Vay S la (" << n << ")" << S << endl;
return 0;
}
//X^3 , 1
