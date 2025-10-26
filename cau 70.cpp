#include <bits/stdc++.h>
using namespace std;


int main() {
 long long n = 0 ; cout << " Nhap n " ; cin >> n ;
double S=0 ;
  for ( int i = 1 ; i<=n ; i++ ) {
    S += pow(-1 , i+1) * 1 / (i * (i  +1) /2);

  }
  cout << fixed << setprecision(5) << endl;
 cout << " Vay gia tri cua S la " << S << endl;
    return 0;
}
