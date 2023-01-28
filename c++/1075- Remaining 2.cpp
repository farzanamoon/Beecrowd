#include<iostream>
using namespace std;
int main()
{
    int N,i;
     cin>>N;
    for(i=1; i<=1000; i++)
    {

        if(i%N==2)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
