#include<iostream>
using namespace std;
int input(double& a, double& b, double& c)
{
    cout<<"Кол-во отработанных часов: "; cin>>a;
    cout<<"Ставка почасовой оплаты: "; cin>>b;
    cout<<"Премия %: "; cin>>c;
    return 0;
}

int raschet(double& a,double& b,double& c)
{
    double all,nalog,na_ruki;
    all = (a*b + (a*b*c)/100);
    nalog = 0.13*(a*b + (a*b*c)/100);
    na_ruki = (all - nalog);
    cout<<"Общая заработанная сумма: "<<all<<endl;
    
    cout<<"Подоходный налог: "<< nalog<<endl;
    
    cout<<"На руки: "<< na_ruki<<endl;
    return 0;
}


int main() 
{
    setlocale(0, "");
    double a,b,c;
    input(a,b,c);
    raschet(a,b,c);
    return 0;
}

