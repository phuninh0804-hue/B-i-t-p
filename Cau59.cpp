#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long chuso = 0; long long chusodaonguoc = 0 ;
long long so=n;
  while (  so!=0){
      chuso =so % 10;
        chusodaonguoc = chusodaonguoc * 10 + chuso ;

 so/=10;
  }

if(chusodaonguoc == n ){
    cout << n << " la chu so doi xung " << " " << endl ;
}
  else{
    cout << n << " khong la chu so doi xung   " ;
  }
  return 0;
}
