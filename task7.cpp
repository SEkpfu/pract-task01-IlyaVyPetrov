#include<iostream>
using namespace std;
int input(double& a, double& b)
{
    cout<<"Кол-во отработанных часов: "; cin>>a;
    cout<<"Ставка почасовой оплаты: "; cin>>b;
    
    return 0;
}

int raschet(double& a,double& b,double& c)
{
    double all,nalog,na_ruki,zp = 0;
    
    
    
    for(int i=0;i<5;i++)
    {

        cout<<"Номер работника: "<<i+1<<endl;
        input(a,b);
        
        all = (a*b + (a*b*c)/100);
        nalog = 0.13*(a*b + (a*b*c)/100);
        na_ruki = ((a*b + (a*b*c)/100) - nalog);
        
        cout<<"Общая заработанная сумма: "<<all<< endl;
        zp+= na_ruki;

    }

    cout<<"Средняя запрлата в бригаде: "<< zp/5;
    return 0;
    
}


int main() 
{
    double a,b,c;
    cout<<"Премия %: "; cin>>c;
    setlocale(0, "");
    
    raschet(a,b,c);
    return 0;
}