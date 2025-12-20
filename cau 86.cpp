#include <bits/stdc++.h>
using namespace std;

int main(){
   int n =0 ; cout<< " nhap so n " ; cin >> n;
    long long tong = 0;
   for(int i = 1 ; i <= n ; i++){
    tong+= pow(i,3);
   }
   cout<< "tong cua n la " << tong << endl;
            return 0 ;
}
