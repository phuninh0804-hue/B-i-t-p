#include <bits/stdc++.h>
using namespace std;
int main() {
   long long n = 0 ; cout << "Nhap n: ";cin >> n;
   long long giatribandaucuan= n; long long chuso = 0;
long long so=n;bool nlatoansole = true;
  while (  so!=0){
      chuso =so % 10 ;
        if(chuso %2 != 0  ){
                nlatoansole =  false;
                }

 so/=10;
  }

if(nlatoansole){
    cout << n << " co toan  so chan" << " " << endl ;
}
  else{
    cout << n << " khong co toan chu so chan  " ;
  }
  return 0;
}
