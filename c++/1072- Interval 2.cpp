#include<iostream>
using namespace std;
int main()
{
    int num, n,i,in=0,out=0;
    cin>>num;
    for(i=0; i<num; i++)
    {
    cin>>n;
    if (n>=10 &&n<=20)
    {
        in++;
    }
    else
        out++;
    }

    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;

    return 0;
}

