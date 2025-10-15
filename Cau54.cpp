#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long soluongchusonhonhat = 0;
   long long giatribandaucuan= n; long long chuso = 0; long long so =n;
  long long chusonhonhat = n % 10;

  while (  so!=0){
      chuso = so % 10 ;
        chusonhonhat  = min (chusonhonhat , chuso);
 so/=10;
  }
  so=n;
while (so!=0){
    chuso = so % 10;
    if( chuso == chusonhonhat ){
    soluongchusonhonhat++;
    }
    so/=10;
}
cout << "Chu so nho nhat cua " << giatribandaucuan << " la " << chusonhonhat << endl;
  cout << " so luong chu so nho nhat  co trong  "<< giatribandaucuan << " la " << soluongchusonhonhat << endl;
  return 0;
}
