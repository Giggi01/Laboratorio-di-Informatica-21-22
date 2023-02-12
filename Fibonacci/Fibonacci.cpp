#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cout<<"Inserisci l'ultimo termine della serie ";
    cin>>n;
    int serie;
    if (n==0||n==1){
        serie=1;
    }else{
        int u=1,p=1;
        for (int i=2;i<=n;i++){
        serie=u+p;
        u=p;
        p=serie;
    }
    }
    cout<<"La serie di Fibonaccia al valore "<<n<<" vale "<<serie<<endl;
}