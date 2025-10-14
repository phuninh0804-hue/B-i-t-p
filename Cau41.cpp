#include <bits/stdc++.h>
using namespace std;
int main() {
   int n = 0 ; cout << "Nhap n: ";cin >> n;
 double S = 1.0;
 for( int i = 1 ; i <= n ; i ++ )
  S = 1.0/(1+S);



    cout << " gia tri cua S la " << S << endl;
  return 0;
}
