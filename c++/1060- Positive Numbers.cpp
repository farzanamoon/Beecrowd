#include<iostream>
using namespace std;
int main()
{
    float x;
    int n=6,i=0;
    while(n--)
    {
       cin>>x;
        i=i+(x>0);

    }
    cout<<i<<" valores positivos"<<endl;

    return 0;
}
