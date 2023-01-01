#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float salary,per;
    cin>> salary;
    if (salary>=0 && salary<=400.00)
   {
       per= 0.15;

   }
   else if (salary>=400.01 && salary<=800.00)
   {
       per= 0.12;
   }
    else if (salary>=800.01 && salary<=1200.00)
   {
      per= 0.10;
   }
   else if (salary>=1200.01 && salary<=2000.00)
   {
       per= 0.07;

   }
   else
   {
       per= 0.04;

   }
cout<< "Novo salario: "<< fixed<<setprecision(2)<<(salary+(salary*per))<<endl<<"Reajuste ganho: "<< fixed<<setprecision(2)<<(salary*per)<<endl;
cout<<"Em percentual: "<<fixed<<setprecision(0)<< per*100<<"%"<<endl;
return 0;


}
