#include <bits/stdc++.h>
using namespace std;


int main() {
 long long x = 0 ; cout << " Nhap x " ;  cin >> x;
 long long n = 0 ; cout << " Nhap n " ; cin >> n ;
 long long S=0 ;
  for ( int i = 1 ; i<=n ; i++ ) {
    S += pow(-1 , i+1) * pow(x , i ) ;

  }
 cout << " Vay gia tri cua S la " << S << endl;
    return 0;
}
