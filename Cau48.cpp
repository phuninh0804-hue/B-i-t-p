#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n ; int chuso = 0;
   int chusole =0 ;
   int tichcacsole = 11;

  while (  n!=0){
  int chuso = n%10;
    { if ( chuso %2 !=0 ) {
        chusole = chuso ;
    tichcacsole *=chusole;
    }

n/=10;
    }
    }

  cout << " tich cac so le co trong "<< giatribandaucuan << " la " << tichcacsole << endl;
  return 0;
}
