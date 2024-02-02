#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   double a,b,c=0,d=0;
   while(1){
    if(d==2)
        break;
    cin>>a;
    if(a>=0 &&a<=10){
        d++;
     c=c+a;}

    else
        cout<<"nota invalida"<<endl;


   }
b=c/2.00;
   cout<< "media= "<<fixed<<setprecision(2)<<b<<endl;
}
