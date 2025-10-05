#include <iostream>
using namespace std;
int main(){
int n=0; cout << "Nhap n? \n"; cin >> n;
double s=0;
for( int i=1; i<=n ; i++){
     s += 2.0 / (i * (i + 1)); // Vì 1+2+3+...+i = i*(i+1)/2
}
cout << "Gia tri cua s ("<< n << ")"<< s << endl;
return 0 ;
}

