#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long  n=0; cout << "Nhap n? \n"; cin >> n;
int i =1; int uoccuan =0; long long tonguoc =0;
while( i <n ){
        if( ( n  %i ==0)  ) {
               uoccuan = i;
               tonguoc +=uoccuan;
}
 i++;
          }

cout << "vay  tong cua cac uoc nho hon "<< n <<" la"<< " " << tonguoc << endl;
return 0;
}
