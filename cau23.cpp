#include <iostream>
using namespace std;

int main(){
int n=0 ; cout << "nhap n \n" ; cin >> n;
int i = 1 ; int souoc = 0;
while (i<=n){
 if(n %i==0){
    ++souoc;
 }
 i++;
}
cout << "So luong uoc cua "<< n<<" la "<< souoc << endl;


return 0;
}
