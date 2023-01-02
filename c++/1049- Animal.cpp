#include<iostream>
using namespace std;
int main()
{
     string a;
     string b;
     string c;
    cin>> a;
    cin>> b;
    cin>> c;
    if (a[0]=='v'&& b[0]=='a') //a=vertebrado; b=ave; c=carnivoro;
    {
       if (c[0]=='c')
        cout<<"aguia"<<endl;
    else
        cout<<"pomba"<<endl;
    }
    if (a[0]=='v'&& b[0]=='m')
    {
       if (c[0]=='o')
        cout<<"homem"<<endl;
    else
        cout<<"vaca"<<endl;
    }
     if (a[0]=='i'&& b[0]=='i')
    {
       if (c[2]=='m')
        cout<<"pulga"<<endl;
    else
        cout<<"lagarta"<<endl;
    }
     if (a[0]=='i'&& b[0]=='a')
    {
       if (c[0]=='h')
        cout<<"sanguessuga"<<endl;
    else
        cout<<"minhoca"<<endl;
    }
    return 0;
}
