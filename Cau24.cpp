#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int souocle =0;
while( i <=n ){
        if( ( n  %i ==0) && (i %2 !=0) ) {
                souocle++;
    cout << " Vay  "<< i<<" la uoc le cua"<< n << endl;

}
 i++;
          }

cout << "vay So uoc  le cua so "<< n <<" la"  << souocle << endl;
return 0;
}
