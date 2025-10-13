#include <bits/stdc++.h>
using namespace std;

int main() {
 int n = 0 ;cout <<"nhap so n? \n" ; cin >> n;
 if ( n<1 ) {
    cout << "n phai lon hon 0 ";
    return 0 ;
 }
int x =  0; cout << " nhap  x ? \n ";  cin >> x;

 long double S= sqrt(x);
 for ( long long  i=2;i <= n   ; i++) {

        S =sqrt  (pow(x,i)+S) ;

 }
cout << "Gia tri cua S la " << fixed << setprecision(8) << S << endl;
  return 0;
}
