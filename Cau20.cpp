#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int souoc =0;
while( i <=n ){
        if( n %i ==0) {
                souoc++;
    cout << " Vay  "<< i<<" la uoc cua "<< n << endl;

}
 i++;
          }

cout << "vay So uoc cua so "<< n <<" la"  << souoc << endl;
return 0;
}
