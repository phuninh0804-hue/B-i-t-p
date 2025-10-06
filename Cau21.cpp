#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int tongcacso =0; int uoccuano = 0;
while( i <=n ){
        if( n %i ==0) {
                uoccuano = i;
              tongcacso += uoccuano;


}
 i++;
          }

cout << "vay tong cac so uoc cua so "<< n <<" la "<<" "<<  tongcacso << endl;
return 0;
}
