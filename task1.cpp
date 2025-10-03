#include<iostream>
using namespace std;
double all(double,double,double);
int main() {
    setlocale(0, "");
    double a,b,c;
    cout<<"Кол-во отработанных часов: "; cin>>a;
    cout<<"Ставка почасовой оплаты: "; cin>>b;
    cout<<"премия%: "; cin>>c;
    double all_sum = all(a,b,c);
    cout<<"общая заработанная сумма: "<<all_sum;
    
}

double all(double a,double b,double c)
{
    return (a*b + (a*b*c)/100);
}



