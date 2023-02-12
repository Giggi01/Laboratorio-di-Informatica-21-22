#include<iostream>
#include<cmath>
using namespace std;

#define N 2

struct dati{
    double x;
    double y;   
};
double distanza(double x1, double x0 ,double y1,double y0){
   double d=sqrt(pow(x1-x0,2)+pow(y1-y0,2));
   return d;
}
int main(){
    dati a[N];
    cout<<"Inserisici i dati dei "<<N<<" punti "<<endl;
    for(int i=1;i<(N+1);i++){
        cout<<"Punto "<<i<<endl;
        cout<<"Ascissa ";
        cin>>a[i].x;
        cout<<"Ordinata ";
        cin>>a[i].y;
    }
    double lenght=distanza(a[2].x,a[1].x,a[2].y,a[1].y);
    cout<<"La distanza tra i due punti e' "<<lenght<<endl;
}
