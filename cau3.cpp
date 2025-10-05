#include <iostream>
 using namespace std;

 int main(){
 int n=0;  cout << "Nhap n \n";cin >> n;
 double S=0;
 for(int i=1; i<=n; i++){
    S +=1.0/i;
 }
 cout << "Tong cua S la \n"  << S << endl;
return 0;
 }

