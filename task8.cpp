#include<iostream>
#include <vector>
using namespace std;
int input(double& a, double& b)
{
    
    cout<<"Кол-во отработанных часов: "; cin>>a;cout<<endl;

    cout<<"Ставка почасовой оплаты: "; cin>>b;cout<<endl;
    
    return 0;
}

int raschet(double& a,double& b,double& c,int& n)
{

    double all,nalog,na_ruki,nal_all = 0;
    double hours[n] = {};
    double rates[n]={};

    double zp[n]={};
    double nal[n]={};
    

    
    
    vector<double> numbers_50000;
    for(int i=0;i<n;i++)
    {

        cout<<"Номер работника: "<<i+1<<endl;
        input(a,b);

        hours[i] = a;
        rates[i] = b;
        
        all = (a*b + (a*b*c)/100);
        nalog = 0.13*(a*b + (a*b*c)/100);
        na_ruki = (all - nalog);
        
        zp[i] = na_ruki;
        nal[i] = nalog;

        cout<<"ЗП: "<<na_ruki<<endl;
        if(na_ruki>50000){
            numbers_50000.push_back(i+1);
            
            
        }

    }

    double min_zp = zp[0];
    int min_ind = 0;
    for(int i=0;i<n;i++){
        if(zp[i]<min_zp){
            min_zp = zp[i];
            min_ind = i;
        }

    }

    double max_zp = zp[0];
    int max_ind = 0;
    for(int i=0;i<n;i++){
        if(zp[i]>max_zp){
            max_zp = zp[i];
            max_ind = i;
        }

    }

    int size = numbers_50000.size();

    cout<<"Номер работника, получившего меньше всех: "<<min_ind + 1;cout<<endl;
    cout<<"Максимальная из зарплат: "<<max_zp<<". Номер получившего ее работника: "<<max_ind + 1;cout<<endl;
    cout<<"Количество работников, получиших на руки более 50 000р: "<<size<<endl;
    if(size != 0){
        
        cout<<"Их номера: "<<endl;
        for(int i=0;i<size;i++){
            cout<<numbers_50000[i]<<endl;

        }

    }
    for(int i=0;i<n;i++){
        nal_all += nal[i];
    }
    cout<<"Общая сумма налога, уплаченного всей бригадой: "<< nal_all;
    return 0;
    
}


int main() 
{
    double a,b,c;
    int n;
    cout<<"Количество работников в бригаде: ";cin>>n;cout<<endl;
    cout<<"Премия %: "; cin>>c;

    setlocale(0, "");
    
    raschet(a,b,c,n);
    return 0;
}