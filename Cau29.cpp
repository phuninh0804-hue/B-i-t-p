#include <iostream>
#include <algorithm>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
long long  int i=1,max; long long uoclelonnhat ;
while( i <n ){
        if( ( n  %i ==0) && i %2 !=0 ) {
              uoclelonnhat =  i;
}
 i++;
          }

cout << "vay  uoc so le lon nhat  cua  "<< n <<" la"<< " " << uoclelonnhat << endl;
return 0;
}
