#include <bits/stdc++.h>
using namespace std;
int main() {
long long n=0;
 cout << "Nhap so n \n"  ;
 cin  >>  n ;
 if( n < 0){
    cout << " n khong the am";
    return  0 ;
 }
 bool sochinhphuong;
  int can = sqrt (n);
        if (  can * can ==n){
                sochinhphuong = true ;
        }
            else{
                sochinhphuong = false ;
                }
 if (sochinhphuong) {
    cout << n << " la so chinh phuong";
 }
 else {
    cout << n << " khong phai la so chinh phuong";
 }

  return 0;
}
