#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n ; int chuso = 0;
   int chusochan =0 ;
   int tongcacsochan = 0;

  while (  n!=0){
  int chuso = n%10;
    { if ( chuso %2 ==0 ) {
        chusochan = chuso ;
    tongcacsochan +=chusochan;
    }

n/=10;
    }
    }

  cout << " tong cac so chan co trong "<< giatribandaucuan << " la " << tongcacsochan << endl;
  return 0;
}
