#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long chusosau=0 ;  long long chusotruoc = 0; long long giatribandau = n;
   chusosau = n % 10;
   n /=10;

   bool tangdan = true;
   while (n!=0) {
    chusotruoc  = n %10;
    if( chusotruoc >= chusosau){
        tangdan = false;
    }
    n /=10;
   }

if (tangdan) {
    cout << giatribandau << " la so tang dan tu trai sang phai ";
}
else {
    cout  << giatribandau <<" la so khong tang dan tu trai sang phai";
}
  return 0;
}
