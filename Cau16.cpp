#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n=0; cout << "Nhap n? \n"; cin >> n;
int X=0; cout <<"Nhap X? \n"; cin >> X;
double s=0; double A=0;
for( int i=1; i<=n ; i++){
    double  A=  (i * (i + 1)) /2; // Vì 1+2+3+...+i = i*(i+1)/2
     s += pow(X , n) / A;
}
cout << "Gia tri cua s ("<< n << ")"<< s << endl;
return 0 ;
}

