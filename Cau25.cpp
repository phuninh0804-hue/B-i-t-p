#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int uocchan =0; long long tongsouocchan =0;
while( i <=n ){
        if( ( n  %i ==0) && (i %2 ==0) ) {
               uocchan=i;
               tongsouocchan+=uocchan ;

}
 i++;
          }

cout << "vay So uoc  chan cua so "<< n <<" la"<< " " << tongsouocchan << endl;
return 0;
}
