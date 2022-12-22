#include<iostream>
using namespace std;
int main()
{
int a,b, ans;
cin>>a>>b;//a= start time; b=end time
if (a>b)
{
  ans=24-(a-b);
  cout<<"O JOGO DUROU " <<ans<<" HORA(S)"<<endl;
}
else if (a==b)
{
    cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
}
else if (a<b)

{
  ans=(b-a);
  cout<<"O JOGO DUROU " <<ans<<" HORA(S)"<<endl;
}
return 0;
}
