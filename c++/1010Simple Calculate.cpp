#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int code1, code2, NoU1, NoU2;
    float price1, price2, result;
    cin>> code1>>NoU1>>price1;
    cout<< endl;
    cin>> code2>>NoU2>>price2;
    result= (NoU1*price1)+(NoU2*price2);
    cout<< showpoint;
    cout<<fixed;
    cout<< setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<result;
    cout<< endl;
    return 0;
}
