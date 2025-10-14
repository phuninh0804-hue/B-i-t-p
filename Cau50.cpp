#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long giatri = 0;
   long long sodaonguoc = 0;

  while (  n!=0){
 giatri = n % 10;
 sodaonguoc = sodaonguoc *10 + giatri;
 n/=10;
  }


  cout << " chu so dao cua "<< giatribandaucuan << " la " << sodaonguoc << endl;
  return 0;
}
