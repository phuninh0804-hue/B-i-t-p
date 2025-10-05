#include <iostream>
using namespace std;
int main(){
int n=0; cout << "Nhap n? \n"; cin >> n;
double s=0;
for( int i=1; i<=n ; i++){
    s+=(double)(i*2-1)/(i*2);
}
cout << "Gia tri cua s ("<< n << ")"<< s << endl;
return 0 ;
}

