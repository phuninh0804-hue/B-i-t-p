#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan = n;
   long long chuso =0;
  while (  n!=0){
  chuso++;
    n /=10;
  }
  cout << " so luong chu so cua "<< giatribandaucuan<< " la " << chuso << endl;
  return 0;
}
