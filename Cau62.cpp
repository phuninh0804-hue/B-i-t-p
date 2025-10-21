#include <bits/stdc++.h>
using namespace std;
int main() {
 int a = 0 ; cout << " nhap so a " ; cin >> a ;
 int b = 0 ; cout << " nhap so b " ; cin >> b;
int ucchung=0;int a1=a;  int b1=b ; int ucln = 0 ;

while(b!=0){
    ucchung = a % b;
    a = b ;
    b = ucchung ;
}
ucln = a ;
 int bcnn = (a1 * b1 ) /ucln ;
  cout << "boi chung  nho nhat  la" << bcnn  << endl;

  return 0;
}
