#include <bits/stdc++.h>
using namespace std;
long long giaithua(int X){
long long kqcuagiaithua = 1 ;
for( long long  i = 1 ; i <= X ; i ++ )
    kqcuagiaithua *=i;
return kqcuagiaithua;
}
int main() {
 int n = 0 ;cout <<"nhap so n? \n" ; cin >> n;
 if ( n<1 ) {
    cout << "n phai lon hon 0 ";
    return 0 ;
 }

 long double S= pow(giaithua(2) + sqrt(giaithua(1)) , 1.0/3);
 for ( long long  i=4;i <= n +1  ; i++) {

        S =pow (giaithua(i-1) + S,1.0/i);

 }
cout << "Gia tri cua S la " << fixed << setprecision(8) << S << endl;
  return 0;
}
