#include <iostream>
using namespace std;
int main(){
int n=0; cout << " Nhap n \n"; cin >> n;
 long long s=0; long long A=1;
for(int i=1 ; i<= n; i++){
    A*=i;
    s +=A ;
}
cout << "gia tri cua S la " << s << endl;
return 0 ;
}
