#include<iostream>
using namespace std;
int main()
{
    double A,B,C,temp;
   cin>>A>>B>>C;
   if (A>B&&A>C &&C>B)
   {

       temp=B;
       B=C;
       C=temp;
   }
   if (B>A&&B>C)
   {
       if (A>C)//B>A>C
        {
           temp=A;
           A=B;
           B=temp;
        }
       else// B>C>A
       {

       temp=C;
       C=A; // A value into C
       A=B; //B value into A
       B=temp; //c value into B
       }
   }
   if (C>B&&C>A)
   {
       if (B>A) //C>B>A
        {
            temp=C;
            C=A;
            A= temp;

        }
       else { //C>A>B
        temp= C;
       C=B;
       B=A;
       A=temp;
       }
   }
   if (A>=(B+C))
   {
       cout<< "NAO FORMA TRIANGULO"<<endl;
   }
   else if ((A*A)==((B*B)+(C*C)))
   {
       cout<<" TRIANGULO RETANGULO"<<endl;
   }
   else if ((A*A)>(B*B)+(C*C))
   {
       cout<<"TRIANGULO OBTUSANGULO"<<endl;
   }
   else if ((A*A)<(B*B)+(C*C))

   {
       cout<<"TRIANGULO ACUTANGULO"<<endl;
   }
   else if (A==B&&B==C)
   {
      cout<<"TRIANGULO EQUILATERO"<<endl;
   }
    if ((A==B&&B!=C)||(A==C&&C!=B)||(B==C&&C!=A))
   {
      cout<<"TRIANGULO ISOSCELES"<<endl;
   }

   return 0;

}
