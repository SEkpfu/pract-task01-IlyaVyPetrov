#include<iostream>
using namespace std;
double all(double,double,double);
double nalog(double,double,double);
double na_ruki(double,double,double);

int input(double& a, double& b, double& c)
{
    cout<<"Кол-во отработанных часов: "; cin>>a;cout<<endl;
    cout<<"Ставка почасовой оплаты: "; cin>>b;cout<<endl;
    cout<<"Премия %: "; cin>>c;cout<<endl;
    return 0;
}
int main() {
    setlocale(0, "");
    double a,b,c;
    input(a,b,c);
    double all_sum = all(a,b,c);
    cout<<"Общая заработанная сумма: "<<all_sum<<endl;
    double nalog_13 = nalog(a,b,c);
    cout<<"Подоходный налог: "<< nalog_13<<endl;
    double nalom = na_ruki(a,b,c);
    cout<<"На руки: "<< nalom<<endl;
}
double all(double a,double b,double c)
{
    return (a*b + (a*b*c)/100);
}
double nalog(double a,double b,double c)
{
    return 0.13*(a*b + (a*b*c)/100);
}
double na_ruki(double a,double b,double c)
{
    return all(a,b,c) - nalog(a,b,c);
}