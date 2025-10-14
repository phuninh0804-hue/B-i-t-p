#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n ;
   long long tich =0;
  while (  n!=0){
        tich *= n%10;
        n/=10;
  }
  cout << " so luong chu so cua "<< giatribandaucuan << " la " << tich << endl;
  return 0;
}
