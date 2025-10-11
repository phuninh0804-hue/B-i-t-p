#include <bits/stdc++.h>
using namespace std;
int main() {
long long n=0;
 cout << "Nhap so n \n"  ;
 cin  >>  n ;
 if ( n < 2){
    cout  << " vui long nhap so lon hon 2";
    return 0 ;
 }
 bool songuyento = true ;
  for(long long  i = 2 ; i<= sqrt(n) ; i++)
  if (n  % i == 0  ) {
        songuyento = false ;
  break ;
  }
  if ( songuyento ) {
    cout << n << " la so nguyen to";
  }
  else{
    cout << n << " khong phai la so nguyen to ";
  }
  return 0;
}
