#include<iostream>
using namespace std;
int main()
{
    int num,i=0;
    cin>>num;
  while(i<6)
   {
       if(num%2!=0)
       {
           cout<<num<<endl;
           i++;
       }
   num++;
   }
    return 0;
}
