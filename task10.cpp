#include<iostream>

// ! This is an alert!

using namespace std;
int input(double& a, double& b)
{
    
    cout<<"Кол-во отработанных часов: "; cin>>a;cout<<endl;
    cout<<"Ставка почасовой оплаты: "; cin>>b;cout<<endl;
    
    return 0;
}

double min_(int &min_ind, double &zp, double&min_zp){

    
    // double min_zp = zp[0];
    // int min_ind = 0;
    for(int i=0;i<4;i++){
        if(zp[i]<min_zp){
            min_zp = zp[i];
            min_ind = i;
        }

    }
    return 0;
}

double max_(double &max_zp, int &max_ind, double &zp){
    
    // double max_zp = zp[0];
    // int max_ind = 0;
    for(int i=0;i<4;i++){
        if(zp[i]>max_zp){
            max_zp = zp[i];
            max_ind = i;
        }

    }
    return 0;
}

double sum_nal(double &nalog, double &nal, double &nal_all){
    
    for(int i=0;i<4;i++){
        nal_all += nal[i];
    }
    
    return 0;
}




int raschet(double& a,double& b,double& c){

    double all,nalog,na_ruki, nal_all = 0;
    double nal[4]={};
    double zp[4]={};
    double known_data[12][4][2];
    
    
    

    for(int m=0;m<12;m++){
        cout<<"Номер месяца: "<<m;

        for(int i=0;i<4;i++)
        {

            cout<<"Номер работника: "<<i+1<<endl;

            input(a,b);

            
            
            all = (a*b + (a*b*c)/100);
            nalog = 0.13*(a*b + (a*b*c)/100);
            na_ruki = (all - nalog);
            
            zp[i] = na_ruki;
            nal[i] = nalog;

            cout<<"ЗП: "<<na_ruki<<endl;
            cout<<"Налог"<<nalog<<endl;
            
                for(int j=0;j<2;j++){
                    if(j==0){
                        known_data[m][i][j] = zp[i];
                    }
                    else{
                        known_data[m][i][j] = nal[i];
                    }
                }
        
            }
    }
    
   
    double max_zp = zp[0];
    int max_ind = 0;
    double min_zp = zp[0];
    int min_ind = 0;
    
    min_(min_ind, zp, min_zp);
    max_(max_zp, max_ind, zp);
    
    
    for(int m=0;m<12;m++){
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cout<<known_data[m][i][j]<<endl;
            }
        }
    }
    return 0;
}
int main(){
    double a,b,c;
    cout<<"Премия %: "; cin>>c;
    setlocale(0, "");

    

    raschet(a,b,c);
    return 0;
}