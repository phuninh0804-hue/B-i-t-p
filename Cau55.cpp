#include <bits/stdc++.h>
using namespace std;
int main() {

 long long n = 0 ; cout << " nhap n: " ; cin >> n ;
 long long chusodautien = 0 ; long long chuso = 0;long long soluongchusodautien=0;
 long long giatribandaucuan=n;
 while (n>=10){
    n/=10;
 }
 chusodautien=n;
n=giatribandaucuan;
while (n!=0){
    chuso = n %10 ;
    if( chuso == chusodautien ){
        soluongchusodautien++;

    }
    n/=10;
}
 cout << " so luong chu so dau tien   co trong  "<< giatribandaucuan << " la " << soluongchusodautien << endl;
  return 0;
}
