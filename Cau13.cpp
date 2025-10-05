#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n=0; cout << " Nhap n \n"; cin >> n;
 int X=0; cout<< " Nhap X \n"; cin >> X;
 long long s=0; long long A=0;
for(int i=1 ;i<= n ; i++){
    A=pow(X  ,i*2);
    s+=A;

}
 cout << " Gia tri cua s"<< " " << s << endl;
 return 0;
}
