#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
   int a,b,c, greatest,greatest_2;
   cin>> a>>b>>c;
   greatest=((a+b+abs(a-b))/2);
   greatest_2=((greatest+c+abs(greatest-c))/2);
   cout<<greatest_2<<" eh o maior"<<endl;
   return 0;
}
