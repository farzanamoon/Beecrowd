#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,x;
    float y,z;
    cin>>x;
    for(i=0;i<x;i++){
        cin>>y>>z;
        if(z==0)
            cout<<"divisao impossivel"<<endl;
        else
            cout<< fixed<<setprecision(1)<<(y/z)<<endl;

    }
    return 0;
}
