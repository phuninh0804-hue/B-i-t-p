#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int uoclasochan =0;
while( i <=n ){
        if( ( n  %i ==0) && (i %2 ==0) ) {
               uoclasochan++;
               cout << " So chan "<< i<< " " << "la uoc cua" << " " << n <<endl;
}
 i++;
          }

cout << "vay so luong uoc la so chan  cua "<< n <<" la"<< " " << uoclasochan << endl;
return 0;
}
