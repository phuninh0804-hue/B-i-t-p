#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n ;
   int soluongsole = 0;

  while (  n!=0){
  int chuso = n%10;
    { if ( chuso %2 !=0 ) {
    soluongsole++;
    }

n/=10;
    }
    }

  cout << " so luong chu so cua so  le  "<< giatribandaucuan << " la " << soluongsole << endl;
  return 0;
}

