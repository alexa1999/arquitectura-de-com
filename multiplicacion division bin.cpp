#include <iostream>
#include <bitset>

using namespace std;

void multiplicacionConSigno(int a, int b){
    bitset<16>(x);
    x = a*b;
    cout<<"mult. con signo: "<<x<<endl;
}
void multiplicacion(int c,int d)
{
    bitset<8>(x);
    x = c*d;
    cout<<"multiplicacion: "<<x<<endl;
}
void division(int e,int f){

    int z=0;
    if(e>f){
        bitset<8>(x);
        bitset<8>(y);
        x= e%f;
        y= e/f;
        cout<<"Residuo: "<<x<<endl;
        cout<<"Divison: "<<y<<endl;
    }else{
        bitset<8>(z);
        cout<<"division : "<<z<<endl;
    }
}

int main() {
    signed long a;
    signed long b;
    cout<<"ingrese 1er numero: ";cin>>a;
    cout<<"ingrese 2do numero:";cin>>b;
    cout<<endl;
    cout<<bitset<8>(a)<<endl;
    cout<<bitset<8>(b)<<endl<<endl;
    multiplicacionConSigno(a,b);
    unsigned long c;
    unsigned long d;
    cout<<"ingrese 1er numero: ";cin>>c;
    cout<<"ingrese 2do numero:";cin>>d;
    cout<<endl;
    cout<<bitset<8>(c)<<endl;
    cout<<bitset<8>(d)<<endl<<endl;
    multiplicacion(c,d);
    cout<<endl;
    unsigned long e;
    unsigned long f;
    cout<<"ingrese 1er numero: ";cin>>e;
    cout<<"ingrese 2do numero:";cin>>f;
    cout<<endl;
    cout<<bitset<8>(e)<<endl;
    cout<<bitset<8>(f)<<endl<<endl;
    division(e,f);
    return 0;
}



