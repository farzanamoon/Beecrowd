#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    float n1,n2,n3,res;

     for(i=1; i<=N; i++)
     {

         cin>>n1>>n2>>n3;
         res= (((n1*2)+(n2*3)+(n3*5))/10);
         cout<<fixed<<setprecision(1)<<res<<endl;
     }
    return 0;
}
