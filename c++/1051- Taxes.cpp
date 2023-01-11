#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double Money;
    cin>>Money;
    if (Money>2000.00 && Money<=3000.00)
    {
      cout<< "R$ "<<fixed<<setprecision(2)<< ((Money-2000.00)*0.08)<<endl;
    }
    else if (Money>3000.00 && Money<=4500.00)
        cout<<"R$ "<<fixed<<setprecision(2)<< (((Money-3000.00)*0.18)+ (1000*0.08))<<endl;
   else if(Money>4500.00)
    cout<< "R$ "<<fixed<<setprecision(2)<<(((Money-4500.00)*0.28)+(1500*0.18)+ (1000*0.08))<<endl;
   else
    cout<<"Isento"<<endl;
   return 0;
}
