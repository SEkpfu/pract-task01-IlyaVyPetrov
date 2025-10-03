//не работает с русскими фамилиями
#include<iostream>
#include<vector>
using namespace std;
int input(double& a, double& b,string& fam)
{
    cout<<"Фамилия, не более 20 символов: "; cin>>fam;
    cout<<"Кол-во отработанных часов: "; cin>>a;
    cout<<"Ставка почасовой оплаты: "; cin>>b;
    
    return 0;
}

int raschet(double& a,double& b,double& c, string& fam)
{
    double all,nalog,na_ruki;
    
    vector<string> fam_1000;
    vector<string> fam_nal;
    
    string fam1,fam2;
    
    
    for(int i=0;i<2;i++)
    {

        cout<<"Номер работника: "<<i+1<<endl;
        input(a,b,fam);
        if(i==0){
            fam1 = fam;
        }
        else{
            fam2=fam;
        }

        all = (a*b + (a*b*c)/100);
        nalog = 0.13*(a*b + (a*b*c)/100);
        na_ruki = all - nalog;

    
        if(na_ruki < 1000){
            
            fam_1000.push_back(fam);
        }
    

        if(nalog>50){
            
            fam_nal.push_back(fam);
        }
    
        
        cout<<"На руки: : "<<na_ruki<<endl;
        cout<<"Налог: "<<nalog<<endl;

    }

    if(fam_1000.size()!=0){
        cout<<"Фамилии тех, кто получил на руки < 1000р: "<<endl;
        for(int i=0;i<fam_1000.size();i++){
            cout<<fam_1000[i]<<endl;
        }
    }
    else{
        cout<<"Никто не получил на руки меньше 1000 р"<<endl;
    }

    if(fam_nal.size()!=0){

    
        cout<<"Фамилии, чей налог составляет > 50 р: "<<endl;
        for(int i=0;i<fam_nal.size();i++){
            fam = fam_nal[i];
            cout<<fam[0]<<"-"<<fam[fam.length()-1]<<endl;
        }
    }
    else{
        cout<<"Ни у кого нет налога больше 50 р"<<endl;
    }


    return 0;
}


int main() 
{
    double a,b,c;
    string fam;
    cout<<"Премия %: "; cin>>c;
    setlocale(LC_ALL, "rus");
    raschet(a,b,c,fam);
    return 0;

}