#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; long long  tichcacso =1; int uoccuano = 0;
while( i <=n ){
        if( n %i ==0) {
                uoccuano = i;
              tichcacso *= uoccuano;


}
 i++;
          }

cout << "vay tich cac so uoc cua so "<< n <<" la "<<" "<<  tichcacso << endl;
return 0;
}
