#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long S = 0; long long k = 0;
  while (   S + k +1 <n){
    S+=k;
    k++;
  }
  cout << " Gia tri lon nhat cua k de chuoi S be hon n la" << k << endl;
  return 0;
}
