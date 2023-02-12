#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
using namespace std; 

int main(){
    fstream f;
    f.open("CreazioneFile/PotenzialeEIntensita",ios::in);
    if(f.fail()==true){
        cout<<"Il file non puo essere letto "<<endl;
    }else{
        vector<double> v1;
        vector<double> v2;
        while(f.eof()==false){
            int x, y;
            f >> x >> y >>ws;
            v1.push_back(x);
            v2.push_back(y);
        }
        f.close();
        cout<<"Lettura completata"<<endl;
        double sommax=0;
        double sommay=0;
        double sommaxy=0;
        double sommax2=0;
        for(int i=0;i<v1.size();i++){
            sommax=sommax+v1[i];
        }
        for(int i=0;i<v1.size();i++){
            sommay=sommay+v2[i];
        }
        for(int i=0;i<v1.size();i++){
            sommax2=sommax2+pow(v1[i],2);
        }
        for(int i=0;i<v1.size();i++){
            sommaxy=sommaxy+(v1[i]*v2[i]);
        }
        double a=((sommay*sommax2)-(sommax*sommaxy))/((v1.size()*sommax2)-pow(sommax,2));
        double b=((v2.size()*sommaxy)-(sommax*sommay))/((v2.size()*sommax2)-pow(sommax,2));
        cout<<"I due coefficienti della retta di regressione tra potenziale e intensita di corrente valgono: A = "<<a<<", B = "<<b<<endl;
    }
}