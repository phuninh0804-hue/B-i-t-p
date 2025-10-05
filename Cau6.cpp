#include <iostream>
using namespace std;

int main(){
int n=0; cout << "n? \n"; cin >> n;
double s=0;
for(int i =1 ; i<= n ; i++ ){
    s+=1.0/(i * (i+1));

}
cout << " Gia tri cua S la("<< n <<")"  << s << endl;
return 0;
}
