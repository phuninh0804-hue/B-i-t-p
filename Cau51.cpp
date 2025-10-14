#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long chuso = 0;
long long chusolonnhat = 0;
  while (  n!=0){
      chuso =n % 10 ;
        chusolonnhat  = max (chusolonnhat , chuso);
 n/=10;
  }


  cout << " chu so lon nhat co trong  "<< giatribandaucuan << " la " << chusolonnhat << endl;
  return 0;
}
