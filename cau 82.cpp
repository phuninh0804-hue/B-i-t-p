#include <bits/stdc++.h>
using namespace std;

int main() {
  int a ,b ,c =0; cout << "Nhap so a, b , c \n"; cin >> a; cin >> b ; cin >> c;
  if ( a > b && a > c ) {
    cout <<" So a: " << a << " la so lon nhat" ;

  }if (b > a && b> c ){
        cout <<"So b: " << b << " la so lon nhat";
  }
if ( c > a && c > b){
    cout << "So c:"<< c << " la so lon nhat";
}
    return 0;
}
