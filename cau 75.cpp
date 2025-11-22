#include <bits/stdc++.h>
using namespace std;

int main() {
   int n = 0; cout << " Nhap so nguyen \n" ; cin >> n;
   if (n > 0 && (n & (n-1))==0){
        cout << " n la nguyen co dang 2k" <<endl;


   }
   else{
    cout << " n k la so nguyen co dang 3k" <<endl;
   }
   return 0 ;
}
