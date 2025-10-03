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
    double all,nalog,na_ruki;
    double sm=0;
    int rab[2]={};
    
    for(int i=0;i<2;i++)
    {

        cout<<"Номер работника: "<<i+1<<endl;
        input(a,b);
        
        all = (a*b + (a*b*c)/100);
        nalog = 0.13*(a*b + (a*b*c)/100);
        na_ruki = (all  - nalog);
        rab[i] = na_ruki;
        sm+=na_ruki;

    }
    

    if(rab[0]>rab[1]){

        cout<<"Номер работника, к-й больше заработал: "<<1<<endl;
    }
    else{
        cout<<"Номер работника, к-й больше заработал: "<<2<<endl;
    }
    cout<<"Общая заработанная сумма: "<<sm<<endl;

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