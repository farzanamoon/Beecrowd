#include<iostream>
using namespace std;
int main()
{
    int a,b,i,n,sum=0;
    cin>>a>>b;
    if(a>b)
   {
     for(i=(b+1); i<a; i++)
     {
         if(i%2 !=0)
         sum= i+sum;
     }
     cout<<sum<<endl;
   }
   else
   {
       for(i=(a+1); i<b; i++)
       {
           if(i%2 !=0)
            sum= i+sum;

       }
       cout<<sum<<endl;
   }


    return 0;
}
