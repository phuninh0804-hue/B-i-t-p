#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n ;
   long long tong =0;
  while (  n!=0){
        tong += n%10;
        n/=10;
  }
  cout << "  Tong cac  chu so cua "<< giatribandaucuan << " la " << tong << endl;
  return 0;
}

