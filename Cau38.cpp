#include <bits/stdc++.h>
using namespace std;
int main() {
 int n = 0 ;cout <<"nhap so n? \n" ; cin >> n;
 if ( n<1 ) {
    cout << "n phai lon hon 0 ";
    return 0 ;
 }
 long double S= pow(2 + sqrt(1) , 1.0/3);
 for ( int i=4;i <= n +1  ; i++) {
        S =pow (i - 1 + S,1.0/i);

 }
cout << "Gia tri cua S la " << fixed << setprecision(8) << S << endl;
  return 0;
}
