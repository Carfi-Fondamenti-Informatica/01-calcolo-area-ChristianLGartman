#include <iostream>
using namespace std;

int main(){

    float a=0, b=0, c=0, A=0;
    cout<<"Dimmi il valore di a, di b e di c"<< std::endl;
    cin >> a >> b >> c;
    if(a>0 && b>0 && c>0) {
        A=a*b/2;
        cout<<A<< std::endl;
        A=a*a;
        cout<<A<< std::endl;
        A=a*b;
        cout<<A<< std::endl;
        A=(a+b)*c/2;
        cout<<A<< std::endl;
    }
    else {
        cout<<"La lunghezza non può essere negativa o nulla, scrivi valori positivi e maggiori di zero.";
    }
}
