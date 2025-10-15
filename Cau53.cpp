#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long chuso = 0;
long long chusolonnhat = 0; long long soluongchusolonnhat = 0;
long long so=n;
while (so!=0) {
    chuso = so%10;
    chusolonnhat  = max (chusolonnhat , chuso);
    so/=10;
}
so=n;
  while (  so!=0){
      chuso =so % 10 ;
        if(chuso == chusolonnhat){
            soluongchusolonnhat ++;
        }

 so/=10;
  }


  cout << " so luong chu so lon nhat co trong  "<< giatribandaucuan << " la " << soluongchusolonnhat << endl;
  return 0;
}
