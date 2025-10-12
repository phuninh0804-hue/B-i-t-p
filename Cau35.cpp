#include <bits/stdc++.h>
using namespace std;
int main() {
int  n = 0 ; cout << " Nhap so n? \n"; cin  >> n;
long double S = sqrt (n);
for( int i = n-1  ; i >= 1 ; i--){
    S = sqrt(S + i);
}
cout << "vay gia tri cua S la"<< " " << fixed << setprecision(5) << S << endl;
  return 0;
}
