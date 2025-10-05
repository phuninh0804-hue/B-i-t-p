#include <iostream>
using namespace std;

int main(){
int n=0 ; cout << "nhap n \n" ; cin >> n;
double s=0;
for(int i =1; i <= n ; i++){
    s +=1.0/(i*2);
}
cout <<  " S la " << s << endl;
return 0 ;
}
