#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 0; cout << " Nhap so n \n" ; cin >> n;
   int x= 0 ; cout << " Nhap x ? \n"; cin >> x ;
   double S =0;
   int tich = 1;
   for(int i  = 1 ; i <=n ; i ++){
    tich *=i;
   S+= pow(-1 , i) * pow(x,i)/tich;}
   cout << " Gia tri cua S la " << S << endl;
    return 0;
}
