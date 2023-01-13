#include<iostream>
using namespace std;
int main()
{
    char day1[4],day2[4], semi[3];
    int sd, ed, sh,eh, sm, em,ss,es, diff;
    cin>> day1>>sd>>sh>>semi>>sm>>semi>>ss;
    cin>> day2>>ed>>eh>>semi>>em>>semi>>es;
    diff=(((((ed*24)+eh)*60)+em)*60+es)- (((((sd*24)+sh)*60)+sm)*60+ss);
    cout<<diff/86400 << " dia(s)"<<endl;
    cout<<(diff%86400)/3600<< " hora(s)"<<endl;
    cout<<((diff%86400)%3600)/60<<" minuto(s)" <<endl;
    cout<<((diff%86400)%3600)%60 <<" segundo(s)" <<endl;
    return 0;

}
