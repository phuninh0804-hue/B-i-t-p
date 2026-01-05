#include <bits/stdc++.h>
using namespace std;

int main(){
   double a=0 ; cout << "Nhap so a?" <<endl; cin >> a;
 double b=0 ; cout << "Nhap so b ?"<< endl; cin>> b;
  double c=0 ; cout << "Nhap so c?" << endl; cin >> c;
 if(a < 0){
    a = fabs(a);
 }
 if(b < 0){
    b=fabs(b);
 }
 if ( c < 0){
    c=fabs(c);
 }
 cout << " cac gia tri sau khi doi"<<endl;
 cout << a << " " << b << " " << c ;
    return 0;
}
