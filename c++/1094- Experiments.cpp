#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int N,n,i;
   char ch;
   int T=0,tc=0,tr=0,ts=0;
   double pc,pr,ps;
   cin>>N;
   for(i=1;i<=N; i++)
   {
       cin>>n;
       cin>>ch;
       T= T+n;
       if(ch=='C')
        tc= tc+ n;
        if(ch=='R')
        tr= tr+n;
        if(ch=='S')
        ts= ts+n;

   }
   pc= (tc/(T*1.0))*100;
   pr= (tr/(T*1.0))*100;
   ps= (ts/(T*1.0))*100;
   cout<<"Total: "<< T<< " cobaias"<<endl;
   cout<<"Total de coelhos: "<< tc<<endl;
   cout<<"Total de ratos: "<<tr<<endl;
   cout<<"Total de sapos: "<<ts<<endl;
   cout<<"Percentual de coelhos: "<<fixed<< setprecision(2)<<pc <<" %"<<endl;
   cout<<"Percentual de ratos: "<<fixed<< setprecision(2) <<pr <<" %"<<endl;
   cout<<"Percentual de sapos: "<<fixed<< setprecision(2)<< ps <<" %"<<endl;
   return 0;
}
