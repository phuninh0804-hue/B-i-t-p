#include <iostream>

using namespace std;

int main(){
int n ; cout << "Nhap so n \n"; cin >>n ;
double s=0;
for (int i=1 ; i<= n ;i++){
    s +=1.0/ ((i*2) + 1);
}
cout << " Gia tri cua S la \n" << s << endl;
}
