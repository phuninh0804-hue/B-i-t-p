#include <bits/stdc++.h>
using namespace std;
int main() {
 int a = 0 ; cout << " nhap so a " ; cin >> a ;
 int b = 0 ; cout << " nhap so b " ; cin >> b;
int ucchung=0;
while(b!=0){
    ucchung = a % b;
    a = b ;
    b = ucchung ;
}


  cout << "uoc chung lon nhat   la" << a   << endl;

  return 0;
}
