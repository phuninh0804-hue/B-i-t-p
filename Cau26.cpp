#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int uocle =0; long long tichsouocle =1;
while( i <=n ){
        if( ( n  %i ==0) && (i %2 !=0) ) {
               uocle=i;
               tichsouocle*=uocle ;

}
 i++;
          }

cout << "vay tich uocle cua "<< n <<" la"<< " " << tichsouocle << endl;
return 0;
}
