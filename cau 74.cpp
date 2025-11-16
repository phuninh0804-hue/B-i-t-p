#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 0; cout << " Nhap so n \n" ; cin >> n;
   int x= 0 ; cout << " Nhap x ? \n"; cin >> x ;
   double S =1 - x ;
   double tich = 1;
   for(int i  = 1 ; i <=n ; i ++){
    tich *=(2 *i ) * (2 *i + 1);
   S+= pow(-1 , i+1) * pow(x,2*i + 1 )/tich;}
   cout << " Gia tri cua S la " << S << endl;
    return 0;
}
