#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long chuso = 0;
  long long chusonhonhat = n % 10;
    n /= 10;
  while (  n!=0){
      chuso = n % 10 ;
        chusonhonhat  = min (chusonhonhat , chuso);
 n/=10;
  }


  cout << " chu so nho nhat  co trong  "<< giatribandaucuan << " la " << chusonhonhat << endl;
  return 0;
}
