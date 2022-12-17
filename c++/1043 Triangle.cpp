#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C;
    cin>> A>> B>> C;
    if (A+B>C&&B+C>A&&C+A>B)
    {
        cout<<"Perimetro = "<<fixed<<setprecision(1)<< A+B+C<<endl;
    }
    else
        cout<<"Area= " <<fixed<<setprecision(1)<<((A+B)/2)*C<<endl;
    return 0;
}
