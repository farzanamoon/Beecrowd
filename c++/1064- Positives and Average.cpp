#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int  count=0,i ;
   float number, avg, sum=0;
     //cin>>number;
   for(i=1; i<=6; i++)
   {
       cin>>number;
       if (number>0)
       {
        sum= sum+ number;
        count ++;
       }
   }
   cout<<count<<" valores positivos"<<endl;
   avg=sum/count;
   cout<<fixed<<setprecision(1)<< avg<<endl;

    return 0;
}
