#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cin>> x>> y;
    if (x==0 && y==0)
    {
        cout<<"Origem"<<endl;
    }
    else if(x==0) //for one line statement there is no need to use 2nd bracket;
        cout<<"Eixo Y"<<endl;
    else if(y==0)
        cout<<"Eixo X"<<endl;
    else if(x>0 &&y>0) /*By the coordinates rule, if both x  and y is positive then it will be in 1st coordinate;
        if x is negative and y is positive then it will be in 2nd coordinate
        if both x and y is negative then it will be in 3rd coordinate*/
        cout<<"Q1"<<endl;
    else if(x<0 &&y>0)
        cout<<"Q2"<<endl;
    else if (x<0&&y<0)
        cout<<"Q3"<<endl;
    else if(x>0&&y<0)
        cout<<"Q4"<<endl;
    return 0;

}
