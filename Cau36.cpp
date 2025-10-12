#include <bits/stdc++.h>
using namespace std;
int main() {
 int n = 0 ;cout <<"nhap so n? \n" ; cin >> n;
 long double S= sqrtl(1.0); long double giaithua = 1;
 for ( long double i=2;i <= n ; i++) {
     giaithua *= i;
    S=sqrtl (giaithua + S );
 }


cout << "Gia tri cua S la " << fixed << setprecision(8) << S << endl;
  return 0;
}
