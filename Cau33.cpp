#include <bits/stdc++.h>
using namespace std;
int main() {
long long n=0;
 cout << "Nhap so n \n"  ;
 cin  >>  n ;
 long double  S=0;
 for( int i = 1 ; i <=n ; i++){
    S = ( sqrt (2 + S));
 }

 cout << " gia tri cua S la " << S << endl;
  return 0;
}

