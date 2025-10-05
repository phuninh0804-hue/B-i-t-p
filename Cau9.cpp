#include <iostream>
using namespace std;
int main(){
int n=0; cout << " Nhap n \n"; cin >> n;
 long long s=1;
for(int i=1 ; i<= n; i++){

    s *=i ;


}
cout << "gia tri cua S la " << s << endl;
return 0 ;
}
