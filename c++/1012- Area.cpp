#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C;
    cin>> A>>B>>C;
    float Triangle= 0.5*A*C;
    cout<< showpoint;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<"TRIANGULO: " <<Triangle;
    cout<<endl;

    float area= 3.14159*(C*C);
    /*cout<< showpoint;
    cout<<fixed;
    cout<<setprecision(3);*/
    cout<<"CIRCULO: " <<area;
    cout<<endl;

    float trapezium= 0.5*(A+B)*C;
    cout<<"TRAPEZIO: " <<trapezium;
    cout<<endl;

    float square= B*B;
    cout<<"QUADRADO: " <<square;
    cout<<endl;

    float ractangle= A*B;
    cout<<"RETANGULO: " <<ractangle;
    cout<<endl;
    return 0;
}
