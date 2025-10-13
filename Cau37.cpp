#include <bits/stdc++.h>
using namespace std;
int main() {
 int n = 0 ;cout <<"nhap so n? \n" ; cin >> n;
 if ( n<3 ) {
    cout << "n phai lon hon 3 ";
    return 0 ;
 }
 long double S= pow(3 + sqrt(2) , 1.0/3);
 for ( int i=4;i <= n ; i++) {
        S =pow (i + S,1.0/i);

 }
cout << "Gia tri cua S la " << fixed << setprecision(8) << S << endl;
  return 0;
}
